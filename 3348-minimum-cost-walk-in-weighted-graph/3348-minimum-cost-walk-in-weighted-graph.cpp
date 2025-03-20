class DSU {
public:
    vector<int> parent, rank;
    
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        iota(parent.begin(), parent.end(), 0);  // Initialize DSU
    }

    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]);  // Path compression
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY])
                parent[rootY] = rootX;
            else if (rank[rootX] < rank[rootY])
                parent[rootX] = rootY;
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        DSU dsu(n);
        vector<vector<pair<int, int>>> graph(n);

        // Step 1: Build DSU and adjacency list
        for (auto& edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];
            dsu.unite(u, v);
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }

        // Step 2: Compute min AND cost using BFS for each connected component
        unordered_map<int, unordered_map<int, int>> minAndCost;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;
            int root = dsu.find(i);

            // BFS for AND-cost computation
            queue<pair<int, int>> q;
            q.push({i, INT_MAX});
            minAndCost[root][i] = INT_MAX;
            visited[i] = true;

            while (!q.empty()) {
                auto [node, cost] = q.front();
                q.pop();

                for (auto [neighbor, weight] : graph[node]) {
                    int newCost = cost & weight;
                    if (!visited[neighbor] || newCost < minAndCost[root][neighbor]) {
                        visited[neighbor] = true;
                        minAndCost[root][neighbor] = newCost;
                        q.push({neighbor, newCost});
                    }
                }
            }
        }

        // Step 3: Answer queries
        vector<int> result;
        for (auto& q : query) {
            int u = q[0], v = q[1];

            if (dsu.find(u) != dsu.find(v)) {
                result.push_back(-1);
            } else {
                result.push_back(minAndCost[dsu.find(u)][v]);
            }
        }

        return result;
    }
};

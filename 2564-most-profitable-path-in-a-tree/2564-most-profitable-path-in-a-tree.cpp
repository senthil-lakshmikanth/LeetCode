class Solution {
public:
  vector<vector<int>> gr;
  vector<int> distanceFromBob;
  int bobStartNode;

  void dfs(int node, int par, int depth, vector<int>& amount, int& maxProfit) {
    int total = 0;
    if (node == bobStartNode) distanceFromBob[node] = 0;
    else distanceFromBob[node] = 1e5;
    
    int maxChildProfit = INT_MIN;
    for (int neighbor : gr[node]) {
      if (neighbor == par) continue;
      dfs(neighbor, node, depth + 1, amount, maxChildProfit);
      distanceFromBob[node] = min(distanceFromBob[node], distanceFromBob[neighbor] + 1);
    }

    if (distanceFromBob[node] > depth) total = amount[node];
    else if (distanceFromBob[node] == depth) total = amount[node] / 2;
    maxProfit = max(maxProfit, (maxChildProfit == INT_MIN ? total : total + maxChildProfit));
  }

  int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
    int n = amount.size();
    bobStartNode = bob;
    gr.resize(n);
    distanceFromBob.resize(n);

    for (auto& edge : edges) {
      gr[edge[0]].push_back(edge[1]);
      gr[edge[1]].push_back(edge[0]);
    }

    int maxProfit = INT_MIN;
    dfs(0, -1, 0, amount, maxProfit);
    return maxProfit;
  }
};
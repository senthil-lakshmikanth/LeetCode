class Solution 
{
public:
    int countDays(int days, vector<vector<int>>& meetings) 
    {
        sort(meetings.begin(), meetings.end());

        int freeDays = days;
        int prevEnd = 0;

        for(auto working_day : meetings)
        {
            int start = working_day[0];
            int end = working_day[1];

            start = max(start, prevEnd + 1);

            int length = end - start + 1;
            length = max(length, 0); /* Consider days = 8, meetings = [[2,5],[3,4],[3,8],[4,8]] prevEnd is 5 after [2,5], and 
                                        In next iteration 'start' becomes 6 and 'end' becomes 4. length = 4 - 6 + 1 causes overflow */
            freeDays -= length;

            prevEnd = max(prevEnd, end);
        }

        return freeDays;
    }
};
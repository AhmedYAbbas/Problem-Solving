class Solution 
{
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        std::vector<std::vector<int>> result;
        int i = 0, n = intervals.size();

        while (i < n && intervals[i][1] < newInterval[0])
            result.push_back(intervals[i++]);

        while (i < n && newInterval[1] >= intervals[i][0])
        {
            newInterval[0] = std::min(intervals[i][0], newInterval[0]);
            newInterval[1] = std::max(intervals[i++][1], newInterval[1]);
        }
        result.push_back(newInterval);

        while (i < n)
            result.push_back(intervals[i++]);

        return result;
    }
};
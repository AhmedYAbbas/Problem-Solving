class Solution 
{
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        intervals.push_back(newInterval);
        return merge(intervals);
    }

private:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>> intervals)
    {
        std::sort(intervals.begin(), intervals.end());
        std::vector<std::vector<int>> result;
        for (auto interval : intervals)
        {
            if (result.empty() || result.back()[1] < interval[0])
                result.push_back(interval);
            else
                result.back()[1] = std::max(result.back()[1], interval[1]);
        }

        return result;
    }
};
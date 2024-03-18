class Solution
{
public:
    int findMinArrowShots(vector<vector<int>>& points)
    {
        std::sort(points.begin(), points.end());
        int arrows = points.size(), end = points[0][1];
        for (int i = 1; i < points.size(); i++)
        {
            if (points[i][0] <= end)
                arrows--;
            else
                end = points[i][1];
        }
        return arrows;
    }
};
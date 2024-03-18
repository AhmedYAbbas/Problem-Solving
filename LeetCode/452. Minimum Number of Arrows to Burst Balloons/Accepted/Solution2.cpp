class Solution
{
public:
    int findMinArrowShots(vector<vector<int>>& points)
    {
        std::sort(points.begin(), points.end(), [](std::vector<int> a, std::vector<int> b){
            return a[1] < b[1];
        });
        int arrows = 1, end = points[0][1];
        for (auto point : points)
        {
            if (point[0] > end)
            {
                arrows++;
                end = point[1];
            }
        }
        return arrows;
    }
};
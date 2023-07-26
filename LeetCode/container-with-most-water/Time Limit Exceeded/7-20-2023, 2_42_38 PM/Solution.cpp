// https://leetcode.com/problems/container-with-most-water

class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int maxArea = INT_MIN;
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = 0; j < height.size(); j++)
            {
                if (i == j)
                    continue;

                int area = std::min(height[i], height[j]) * std::abs(i - j);
                if (area > maxArea)
                    maxArea = area;
            }
        }

        return maxArea;
    }
};
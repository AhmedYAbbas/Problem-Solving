// https://leetcode.com/problems/container-with-most-water

class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int maxArea = INT_MIN, max = INT_MIN, maxIndex = INT_MIN;
        for (int i = 0; i < height.size(); i++)
        {
            if (height[i] > max)
            {
                max = height[i];
                maxIndex = i;
            }
        }

        for (int i = 0; i < height.size(); i++)
        {
            int area = std::min(height[i], max) * std::abs(maxIndex - i);
            if (area > maxArea)
                maxArea = area;
        }

        return maxArea;
    }
};
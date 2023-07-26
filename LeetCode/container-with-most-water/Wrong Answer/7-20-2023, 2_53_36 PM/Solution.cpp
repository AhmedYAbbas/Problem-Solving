// https://leetcode.com/problems/container-with-most-water

class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int n = height.size();
        int maxArea = std::abs(0 - (n - 1)) * std::min(height[0], height[n - 1]);
        int max = INT_MIN, maxIndex = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (height[i] > max)
            {
                max = height[i];
                maxIndex = i;
            } 
        }

        for (int i = 0; i < n; i++)
        {
            int area = std::min(max, height[i]) * std::abs(maxIndex - i);
            if (area > maxArea)
                maxArea = area;
        }

        return maxArea;
    }
};

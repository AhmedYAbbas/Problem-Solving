// https://leetcode.com/problems/container-with-most-water

class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int i = 0, j = height.size() - 1, maxArea = 0;
        
        while (i < j)
        {
            int currentArea = std::min(height[i], height[j]) * (j - i);
            maxArea = std::max(currentArea, maxArea);

            if (height[i] < height[j])
                i++;
            else
                j--;

        }

        return maxArea;
    }
};

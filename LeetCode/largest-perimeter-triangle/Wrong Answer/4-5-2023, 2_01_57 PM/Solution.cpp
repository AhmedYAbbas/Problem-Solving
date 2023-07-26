// https://leetcode.com/problems/largest-perimeter-triangle

class Solution 
{
public:
    int largestPerimeter(vector<int>& nums) 
    {
        auto max = std::max_element(nums.begin(), nums.end());
        for (auto i = nums.begin(); i != nums.end(); i++)
        {
            if (i != nums.end() - 1 && i != max && i + 1 != max)
            {
                if (*i + *(i + 1) > *max)
                    return *max + *i + *(i + 1);
            }
        }

        return 0;
    }
};
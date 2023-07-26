// https://leetcode.com/problems/move-zeroes

class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        for (int lastNonZero = 0, i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                std::swap(nums[lastNonZero++], nums[i]);
        }
    }
};
// https://leetcode.com/problems/move-zeroes

class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size(), j = 0;
        std::vector<int> temp(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
                temp[j++] = nums[i];
        }

        for (int i = 0; i < n; i++)
            nums[i] = temp[i];
    }
};
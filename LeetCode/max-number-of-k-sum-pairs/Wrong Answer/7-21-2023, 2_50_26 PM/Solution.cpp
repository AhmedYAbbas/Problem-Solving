// https://leetcode.com/problems/max-number-of-k-sum-pairs

class Solution 
{
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int i = 0, j = nums.size() - 1, operations = 0;
        while (i < j)
        {
            if (nums[i] + nums[j] == k)
            {
                operations++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }

        return operations;
    }
};
class Solution 
{
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int start = 0, result = 0, mul = 1;

        if (k <= 1)
            return 0;

        for (int end = 0; end < nums.size(); end++)
        {
            mul *= nums[end];
            while (mul >= k)
            {
                mul /= nums[start++];
            }
            result += end - start + 1;
        }
        return result;
    }
};
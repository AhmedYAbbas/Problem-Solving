class Solution 
{
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n = nums.size();
        for (int& num : nums)
        {
            if (num < 0 || num > n)
                num = 0;
        }

        for (int i = 0; i < n; i++)
        {
            int value = std::abs(nums[i]);
            if (value >= 1 && value <= n)
            {
                if (nums[value - 1] > 0)
                    nums[value - 1] *= -1;
                else if (nums[value - 1] == 0)
                    nums[value - 1] = -1 * (n + 1);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (nums[i - 1] >= 0)
                return i;
        }

        return n + 1;
    }
};
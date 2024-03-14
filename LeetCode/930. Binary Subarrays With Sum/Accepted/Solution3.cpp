class Solution 
{
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        int start = 0, currentSum = 0, totalCount = 0, zeroSum = 0;
        for (int end = 0; end < nums.size(); end++)
        {
            currentSum += nums[end];

            while (start < end && (nums[start] == 0 || currentSum > goal))
            {
                if (nums[start] == 0)
                    zeroSum++;
                else 
                    zeroSum = 0;

                currentSum -= nums[start++];
            }

            if (currentSum == goal)
                totalCount += 1 + zeroSum;
        }
        return totalCount;
    }
};
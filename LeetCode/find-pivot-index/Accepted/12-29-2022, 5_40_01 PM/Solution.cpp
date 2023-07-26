// https://leetcode.com/problems/find-pivot-index

class Solution 
{
public:
    int pivotIndex(vector<int>& nums) 
    {
        int rSum = 0, lSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
                lSum = 0;
            else
            {
                lSum += nums[i - 1];
                rSum = 0;
            }

            for (int j = i + 1; j < nums.size(); j++)
            {
                rSum += nums[j];
            }
            
            if (lSum == rSum)
                return i;
        }
        return -1;
    }
};
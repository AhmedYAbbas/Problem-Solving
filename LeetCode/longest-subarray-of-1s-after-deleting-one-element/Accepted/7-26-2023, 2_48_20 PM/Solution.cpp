// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element

class Solution 
{
public:
    int longestSubarray(vector<int>& nums) 
    {
        int i = 0, j = 0, deleted = 0, maxCount = 0;
        while (j < nums.size())
        {
            if (nums[j] == 0)
                deleted++;

            if (deleted > 1)
            {
                if (nums[i] == 0)
                    deleted--;
                i++;
            }
            maxCount = std::max(maxCount, j - i);
            j++;
        }
        
        return maxCount;
    }
};
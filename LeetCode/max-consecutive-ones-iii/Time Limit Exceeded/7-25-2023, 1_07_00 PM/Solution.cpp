// https://leetcode.com/problems/max-consecutive-ones-iii

class Solution 
{
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i = 0, j = 0, numOfZeros = 0, count = 0, longestOnes = 0;
        while (i < nums.size())
        {
            j = i;
            while (numOfZeros <= k && j < nums.size())
            {
                if (numOfZeros == k && nums[j] == 0)
                    break;

                if (nums[j] == 0)
                    numOfZeros++;
                    
                count++;
                j++;
            }
            longestOnes = std::max(longestOnes, count);
            numOfZeros = 0;
            count = 0;
            i++;
        }

        return longestOnes;
    }
};
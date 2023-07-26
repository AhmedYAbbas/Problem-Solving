// https://leetcode.com/problems/max-consecutive-ones-iii

class Solution 
{
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i = 0, j = 0, numOfZeros = 0, longestOnes = 0;
        while (j < nums.size())
        {
            if (nums[j] == 0)
                numOfZeros++;

            while (numOfZeros > k)
            {
                if (nums[i] == 0)
                    numOfZeros--;
                i++;
            }
            
            longestOnes = std::max(longestOnes, j - i + 1);
            j++;
        }

        return longestOnes;
    }
};
// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int j = 2, count = 1;
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] != nums[j - 2])
            {
                nums[j++] = nums[i];
            }
        }

        return j;
    }
};
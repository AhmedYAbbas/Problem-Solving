// https://leetcode.com/problems/increasing-triplet-subsequence

class Solution 
{
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        bool hasTriplet = false;
        int i = 0, j = 1, k = 2;
        while (i < nums.size() && j < nums.size() && k < nums.size())
        {
            if (i == j)
                j++;
            if (j == k)
                k++;

            if (nums[i] < nums[j] && nums[j] < nums[k])
            {
                hasTriplet = true;
                break;
            }

            if (nums[i] > nums[j] && nums[j] < nums[k])
                i++;
            if (nums[i] > nums[j] && nums[j] > nums[k])
                k++;
            if (nums[i] < nums[j] && nums[j] > nums[k])
                j++;
        }

        return hasTriplet;
    }
};
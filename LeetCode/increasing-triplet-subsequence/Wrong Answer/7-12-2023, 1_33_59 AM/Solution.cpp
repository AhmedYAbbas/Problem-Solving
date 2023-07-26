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
            if (nums[i] < nums[j] && nums[j] < nums[k])
                hasTriplet = true;
            else
                hasTriplet = false;

            i++;
            j++;
            k++;
        }

        return hasTriplet;
    }
};
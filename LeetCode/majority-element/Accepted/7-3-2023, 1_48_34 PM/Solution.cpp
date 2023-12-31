// https://leetcode.com/problems/majority-element

class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        std::unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]] += 1;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (map[nums[i]] > nums.size() / 2)
                return nums[i];
        }
        return 0;
    }
};
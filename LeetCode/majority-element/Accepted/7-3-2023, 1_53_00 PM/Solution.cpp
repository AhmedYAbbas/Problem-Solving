// https://leetcode.com/problems/majority-element

class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        std::unordered_map<int, int> map;
        int n = nums.size();

        for (int i = 0; i < n; i++)
            map[nums[i]]++;

        for (const auto& kv : map)
        {
            if (kv.second > n / 2)
                return kv.first;
        }

        return 0;
    }
};
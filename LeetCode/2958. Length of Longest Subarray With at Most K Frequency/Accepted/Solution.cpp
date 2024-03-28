class Solution 
{
public:
    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        int result = 0, start = 0;
        std::unordered_map<int, int> map;
        for (int end = 0; end < nums.size(); end++)
        {
            map[nums[end]]++;
            while (map[nums[end]] > k)
                map[nums[start++]]--;
            result = std::max(result, end - start + 1);
        }
        return result;
    }
};
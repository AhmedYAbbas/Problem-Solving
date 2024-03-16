class Solution 
{
public:
    int findMaxLength(vector<int>& nums) 
    {
        std::unordered_map<int, int> map;
        for (int num : nums)
            map[num]++;

        int min = map[0];
        for (auto[key, value] : map)
            min = std::min(min, value);

        return min * 2;
    }
};
class Solution 
{
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        std::unordered_map<int, int> map;
        for (int num : nums)
            map[num]++;

        int maxFrequency = 0;
        for (auto kvp : map)
        {
            if (kvp.second > maxFrequency)
                maxFrequency = kvp.second;
        }

        int result = 0;
        for (auto kvp : map)
        {
            if (kvp.second == maxFrequency)
                result += maxFrequency;
        }

        return result;
    }
};
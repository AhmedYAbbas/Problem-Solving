class Solution 
{
public:
    int findMaxLength(vector<int>& nums) 
    {
        std::unordered_map<int, int> map;
        map[0] = -1;
        int count = 0, max = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            count += nums[i] == 0 ? -1 : 1;
            if (map.contains(count))
                max = std::max(max, i - map[count]);
            else
                map[count] = i;
        }

        return max;
    }
};
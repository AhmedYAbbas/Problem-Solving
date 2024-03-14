class Solution 
{
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        std::unordered_map<int, int> map;
        int currentSum = 0, totalCount = 0;
        for (int num : nums)
        {
            currentSum += num;
            if (currentSum == goal)
                totalCount++;

            if (map.contains(currentSum - goal))
                totalCount += map[currentSum - goal];

            map[currentSum]++;
        }


        return totalCount;
    }
};
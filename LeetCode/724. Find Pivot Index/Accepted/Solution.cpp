class Solution 
{
public:
    int pivotIndex(vector<int>& nums) 
    {
        int leftSum = 0;
        int sum = std::accumulate(nums.begin(), nums.end(), 0);
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (leftSum == sum - nums[i] - leftSum)
                return i;
            leftSum += nums[i];
        }
        
        return -1;
    }
};

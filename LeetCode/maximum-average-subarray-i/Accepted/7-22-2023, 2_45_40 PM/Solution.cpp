// https://leetcode.com/problems/maximum-average-subarray-i

class Solution 
{
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double sum = std::accumulate(nums.begin(), nums.begin() + k, 0);
        double maxAvg = sum / k;

        for (int i = 1; i <= nums.size() - k; i++)
        {
            sum = sum - nums[i - 1] + nums[i + k - 1];
            double avg = sum / k;
            if (avg > maxAvg)
                maxAvg = avg;
        }

        return maxAvg;
    }
};
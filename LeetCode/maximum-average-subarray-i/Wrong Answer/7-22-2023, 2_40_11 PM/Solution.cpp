// https://leetcode.com/problems/maximum-average-subarray-i

class Solution 
{
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double maxSum = std::accumulate(nums.begin(), nums.begin() + k, 0);
        double maxAvg = maxSum / k;

        for (int i = 1; i < nums.size() - k; i++)
        {
            double sum = std::accumulate(nums.begin() + i, nums.begin() + i + k, 0);
            if (sum > maxSum)
            {
                maxSum = sum;
                maxAvg = maxSum / k;
            }
        }

        return maxAvg;
    }
};
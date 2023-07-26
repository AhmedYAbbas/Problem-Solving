// https://leetcode.com/problems/maximum-average-subarray-i

class Solution 
{
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double sum;
        double maxAvg = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i < k)
                sum += nums[i];
            else
                sum += nums[i] - nums[i - k];

            if (i >= k - 1)
            {
                double avg = sum / k;
                maxAvg = std::max(avg, maxAvg);
            }
        }

        return maxAvg;
    }
};
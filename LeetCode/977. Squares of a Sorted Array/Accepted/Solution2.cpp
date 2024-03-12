class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int start = 0, end = nums.size() - 1, k = end;
        std::vector<int> result(k + 1, 0);
        while (start <= end)
        {
            if (nums[start] * nums[start] < nums[end] * nums[end])
                result[k--] = nums[end] * nums[end--];
            else
                result[k--] = nums[start] * nums[start++];
        }

        return result;
    }
};
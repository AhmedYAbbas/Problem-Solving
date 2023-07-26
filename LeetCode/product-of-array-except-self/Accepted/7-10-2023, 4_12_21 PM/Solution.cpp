// https://leetcode.com/problems/product-of-array-except-self

class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();
        std::vector<int> answer(size);
        answer[0] = 1;
        int right = 1;

        for (int i = 1; i < size; i++)
            answer[i] = answer[i - 1] * nums[i - 1];

        for (int i = size - 2; i >= 0; i--)
        {
            right *= nums[i + 1];
            answer[i] *= right;
        }

        return answer;
    }
};
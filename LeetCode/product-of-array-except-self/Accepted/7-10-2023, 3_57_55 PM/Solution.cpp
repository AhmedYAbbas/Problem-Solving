// https://leetcode.com/problems/product-of-array-except-self

class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();
        std::vector<int> leftMul(size);
        std::vector<int> rightMul(size);
        std::vector<int> answer(size);
        leftMul[0] = 1;
        rightMul[size - 1] = 1;

        for (int i = 1; i < size; i++)
            leftMul[i] = leftMul[i - 1] * nums[i - 1];

        for (int i = size - 2; i >= 0; i--)
            rightMul[i] = rightMul[i + 1] * nums[i + 1];

        for (int i = 0; i < size; i++)
            answer[i] = leftMul[i] * rightMul[i];

        return answer;
    }
};
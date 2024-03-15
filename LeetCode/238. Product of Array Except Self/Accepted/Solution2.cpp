class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();
        std::vector<int> result(size);
        result[0] = 1;
        int rightMul = 1;

        for (int i = 1; i < size; i++)
            result[i] = result[i - 1] * nums[i - 1];

        for (int i = size - 2; i >= 0; i--)
        {
            rightMul *= nums[i + 1];
            result[i] *= rightMul;
        }

        return result;
    }
};
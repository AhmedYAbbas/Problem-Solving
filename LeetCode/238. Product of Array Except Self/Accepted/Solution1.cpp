class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();
        std::vector<int> left(size);
        std::vector<int> right(size);
        left[0] = 1;
        right[size - 1] = 1;

        for (int i = 1; i < size; i++)
            left[i] = nums[i - 1] * left[i - 1];

        for (int i = size - 2; i >= 0; i--)
            right[i] = nums[i + 1] * right[i + 1];

        for (int i = 0; i < size; i++)
            nums[i] = left[i] * right[i];

        return nums;
    }
};
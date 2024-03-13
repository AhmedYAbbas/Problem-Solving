class Solution 
{
public:
    int pivotInteger(int n) 
    {
        if (n == 1)
            return 1;

        std::vector<int> nums;
        for (int i = 1; i <= n; i++)
            nums.push_back(i);

        int i = 0, j = nums.size() - 1, leftSum = 0, rightSum = 0;
        while (i <= j)
        {
            if (leftSum < rightSum)
                leftSum += nums[i++];
            else if (leftSum > rightSum)
                rightSum += nums[j--];
            else
            {
                leftSum += nums[i++];
                rightSum += nums[j--];
            }
        }

        return leftSum == rightSum ? nums[--i] : -1;
    }
};
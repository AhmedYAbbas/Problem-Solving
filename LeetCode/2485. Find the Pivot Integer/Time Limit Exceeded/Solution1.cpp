class Solution 
{
public:
    int pivotInteger(int n) 
    {
        int left = 1, right = n, leftSum = left, rightSum = right;
        if (n == 1)
            return 1;

        while (left <= right)
        {
            if (leftSum < rightSum)
                leftSum += ++left;
            else if (leftSum > rightSum)
                rightSum += --right;
            else if (leftSum == rightSum && (left + 1 == right - 1))
                return ++left;
        }

        return -1;
    }
};
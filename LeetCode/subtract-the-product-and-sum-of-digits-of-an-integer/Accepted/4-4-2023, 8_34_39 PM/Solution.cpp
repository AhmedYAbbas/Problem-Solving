// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

class Solution 
{
public:
    int subtractProductAndSum(int n) 
    {
        int sum = 0, mul = 1;
        while (n)
        {
            int r = n % 10;
            sum += r;
            mul *= r;
            n /= 10;
        }

        return mul - sum;
    }
};
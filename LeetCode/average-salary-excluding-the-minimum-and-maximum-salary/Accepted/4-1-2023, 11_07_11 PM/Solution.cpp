// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary

class Solution 
{
public:
    double average(vector<int>& salary) 
    {
        double sum = 0, min = DBL_MAX, max = DBL_MIN;

        for (const auto& sal : salary)
        {
            sum += sal;

            if (sal > max)
                max = sal;

            if (sal < min)
                min = sal;
        }

        return (sum - min - max) / (salary.size() - 2); 
    }
};
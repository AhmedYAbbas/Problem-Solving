// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary

class Solution 
{
public:
    double average(vector<int>& salary) 
    {
        int sum = 0, max = 0, min = salary[0];

        for (const auto& x : salary)
        {
            if (x > max)
                max = x;
            else if (x < min)
                min = x;
        }

        for (const auto& x : salary)
        {
            if (x == max || x == min)
                continue;

            sum += x;
        }

        return sum / (salary.size() - 2);
    }
};
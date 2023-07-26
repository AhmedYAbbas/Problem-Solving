// https://leetcode.com/problems/greatest-common-divisor-of-strings

class Solution 
{
public:
    string gcdOfStrings(string str1, string str2) 
    {
        std::string result = "";

        if (str1.front() != str2.front())
            return result;
        else
            result.push_back(str2.front());

        for (int i = 1; i < str1.size(); i++)
        {
            if (str1[i] == str2[i] && str1[i] != str2.front())
                result.push_back(str2[i]);
            else if (str1[i] == str2[0])
                return result;
        }

        return result;
    }
};
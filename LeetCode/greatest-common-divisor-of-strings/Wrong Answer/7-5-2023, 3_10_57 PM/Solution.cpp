// https://leetcode.com/problems/greatest-common-divisor-of-strings

class Solution 
{
public:
    string gcdOfStrings(string str1, string str2) 
    {
        std::string result = "";

        if (str1[0] != str2[0])
            return result;
        else
            result.push_back(str2[0]);

        for (int i = 1; i < str2.size(); i++)
        {
                
            if (str1[i] == str2[i] && str1[i] != str2[0])
                result.push_back(str2[i]);
            else
                return result;

            if (i == str2.size() - 1 && str1[i + 1] != str2[0])
                result = "";
        }

        return result;
    }
};
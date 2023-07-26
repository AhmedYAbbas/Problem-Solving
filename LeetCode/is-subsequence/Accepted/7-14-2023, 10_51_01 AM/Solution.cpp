// https://leetcode.com/problems/is-subsequence

class Solution 
{
public:
    bool isSubsequence(string s, string t) 
    {
        int j = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (s[j] == t[i])
                j++;
        }
        
        return j == s.size();
    }
};
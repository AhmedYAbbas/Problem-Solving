// https://leetcode.com/problems/is-subsequence

class Solution 
{
public:
    bool isSubsequence(string s, string t) 
    {
        vector<int> indices;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < t.size(); j++)
            {
                if (s[i] == t[j])
                {
                    indices.push_back(j);
                    count++;
                    break;
                }
            }
        }

        if (count != s.size())
            return false;

        for (int i = 0; i < indices.size(); i++)
        {
            if (i != 0)
            {
                if (indices[i] < indices[i - 1])
                    return false;
            }
        }
        return true;
    }
};
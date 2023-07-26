// https://leetcode.com/problems/isomorphic-strings

class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char, char> mapping_s_t;
        unordered_map<char, char> mapping_t_s;

        for (int i = 0; i < s.size(); i++)
        {
            char c1 = s[i];
            char c2 = t[i];

            if (mapping_s_t.find(c1) == mapping_s_t.end() && mapping_t_s.find(c2) == mapping_t_s.end())
            {
                mapping_s_t[c1] = c2;
                mapping_t_s[c2] = c1;
            }
            else if (!(mapping_s_t[c1] == c2 && mapping_t_s[c2] == c1))
                return false;
        }
        return true;
    }
};
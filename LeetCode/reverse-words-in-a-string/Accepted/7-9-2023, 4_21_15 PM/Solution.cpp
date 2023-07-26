// https://leetcode.com/problems/reverse-words-in-a-string

class Solution 
{
public:
    string reverseWords(string s) 
    {
        int start = 0, end = 0, i = 0, n = s.size();

        std::reverse(s.begin(), s.end());
        while (i < n)
        {
            while (i < n && s[i] != ' ')
                s[end++] = s[i++];

            if (start < end)
            {
                std::reverse(s.begin() + start, s.begin() + end);
                if (end == n)
                    break;
                s[end++] = ' ';
                start = end;
            }

            i++;
        }
        
        if (s[end - 1] == ' ')
            s.resize(end - 1);
        else
            s.resize(end);
        return s;
    }
};
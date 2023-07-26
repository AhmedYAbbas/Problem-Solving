// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution 
{
public:
    bool IsVowel(char c)
    {
        c = toupper(c);
        return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s) 
    {
        int j = s.size() - 1;
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (IsVowel(s[i]))
            {
                while (j > s.size() / 2)
                {
                    if (IsVowel(s[i]) && IsVowel(s[j]))
                    {
                        char temp = s[i];
                        s[i] = s[j];
                        s[j--] = temp;
                        break;
                    }
                    j--;
                }
            }
        }

        return s;
    }
};
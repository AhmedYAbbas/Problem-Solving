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
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);

            if (i < j)
                std::swap(s[i++], s[j--]);
        }

        return s;
    }
};
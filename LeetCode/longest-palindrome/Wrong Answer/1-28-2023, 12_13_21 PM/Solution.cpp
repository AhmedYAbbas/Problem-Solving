// https://leetcode.com/problems/longest-palindrome

class Solution 
{
public:
    int longestPalindrome(string s) 
    {
        if (s.length() == 1) 
            return 1;

        int odd = 0, even = 0;
        unordered_map<char, int> letters;

        for (int i = 0; i < s.length(); i++)
        {
            letters[s[i]] += 1;
        }
        
        for (int i = 0; i < s.length(); i++)
        {
            if (letters[s[i]] % 2 != 0)
                odd++;
            else
                even++;
        }

        if (odd > 1 && even > 1)
            return s.length() - 1;
        else if (even > 1 || odd > 1)
            return s.length();
        else
            return 0;
    }
};
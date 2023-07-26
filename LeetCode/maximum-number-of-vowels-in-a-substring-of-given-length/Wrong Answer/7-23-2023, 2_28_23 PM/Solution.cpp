// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution 
{
public:
    bool IsVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) 
    {
        int maxVowels = 0, vowels;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < k)
            {
                if (IsVowel(s[i]))
                {
                    maxVowels++;
                    vowels = maxVowels;
                }
            }
            else
            {
                if (IsVowel(s[i]))
                    vowels++;
                if (IsVowel(s[i - k]))
                    vowels--;
            }

            if (i >= k - 1)
            {
                maxVowels = std::max(maxVowels, vowels);
            }
        }

        return maxVowels;
    }
};
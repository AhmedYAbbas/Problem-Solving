// https://leetcode.com/problems/reverse-words-in-a-string

class Solution 
{
public:
    string reverseWords(string s) 
    {
        std::string reversedWords;
        std::stringstream ss(s);
        std::string token;
        while (ss >> token)
        {
            reversedWords = token + " " + reversedWords;
        }

        return reversedWords.substr(0, reversedWords.size() - 1);
    }
};
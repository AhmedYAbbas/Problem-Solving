// https://leetcode.com/problems/reverse-words-in-a-string

class Solution 
{
public:
    string reverseWords(string s) 
    {
        std::string reversedWords;
        std::string word;
        std::vector<std::string> words;
        bool first = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == s.size() - 1 && !std::isspace(s[i]))
            {
                word += s[i];
                words.push_back(word);
            }

            if (!std::isspace(s[i]))
                word += s[i];
            else if (std::isspace(s[i]) && word.size() > 0)
            {
                words.push_back(word);
                word = "";
            }
        }

        std::reverse(words.begin(), words.end());
        for (std::string word : words)
        {
            if (!first)
                reversedWords += ' ';
            
            reversedWords += word;
            first = false;
        }

        return reversedWords;
    }
};
// https://leetcode.com/problems/merge-strings-alternately

class Solution 
{
public:
    string mergeAlternately(string word1, string word2) 
    {
        int i = 0, j = 0;
        std::string mergedString;
        while (i < word1.size() || j < word2.size())
        {
            if (i >= word1.size())
                mergedString.append(1, word2[j++]);
            else if (j >= word2.size())
                mergedString.append(1, word1[i++]);
            else    
            {
                mergedString.append(1, word1[i++]);
                mergedString.append(1, word2[j++]);
            }
        }

        return mergedString;
    }
};
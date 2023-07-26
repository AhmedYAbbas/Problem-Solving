// https://leetcode.com/problems/merge-strings-alternately

class Solution 
{
public:
    string mergeAlternately(string word1, string word2) 
    {
        int i = 0, j = 0, m = word1.size(), n = word2.size();
        std::string mergedString;
        while (i < m || j < n)
        {
            if (i < m)
                mergedString.push_back(word1[i++]);

            if (j < n)
                mergedString.push_back(word2[j++]);
        }

        return mergedString;
    }
};
// https://leetcode.com/problems/merge-strings-alternately

class Solution 
{
public:
    string mergeAlternately(string word1, string word2) 
    {
        int m = word1.size(), n = word2.size();
        int i = 0, size = std::max(m, n);

        std::string mergedString;
        for (int i = 0; i < size; i++)
        {
            if (i < m)
                mergedString.push_back(word1[i]);

            if (i < n)
                mergedString.push_back(word2[i]);
        }

        return mergedString;
    }
};
class Solution 
{
public:
    bool closeStrings(string word1, string word2) 
    {
        if (word1.size() != word2.size())
            return false;

        std::set<char> set1;
        std::set<char> set2;
        std::vector<int> freq1(26, 0);
        std::vector<int> freq2(26, 0);

        for (int i = 0; i < word1.size(); i++)
        {
            set1.insert(word1[i]);
            set2.insert(word2[i]);

            freq1[word1[i] - 'a']++;
            freq2[word2[i] - 'a']++;
        }

        std::sort(freq1.begin(), freq1.end());
        std::sort(freq2.begin(), freq2.end());

        if (set1 == set2 && freq1 == freq2)
            return true;

        return false;
    }
};
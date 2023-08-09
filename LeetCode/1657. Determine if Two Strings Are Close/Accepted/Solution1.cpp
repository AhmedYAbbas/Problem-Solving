class Solution 
{
public:
    bool closeStrings(string word1, string word2) 
    {
        if (word1.size() != word2.size())
            return false;

        std::unordered_map<char, int> map1;
        std::unordered_map<char, int> map2;
        for (char ch : word1)
            map1[ch]++;

        for (char ch : word2)
            map2[ch]++;
    
        for (auto[key, value] : map1)
        {
            if (!map2.contains(key))
                return false;
        }

        std::vector<int> values1;
        std::vector<int> values2;
        for (auto[key, value] : map1)
            values1.push_back(value);

        for (auto[key, value] : map2)
            values2.push_back(value);

        std::sort(values1.begin(), values1.end());
        std::sort(values2.begin(), values2.end());

        for (int i = 0; i < values1.size(); i++)
        {
            if (values1[i] != values2[i])
                return false;
        }

        return true;
    }
};
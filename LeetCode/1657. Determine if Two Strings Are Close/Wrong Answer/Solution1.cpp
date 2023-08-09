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

        bool valueExists;
        for (auto[key1, value1] : map1)
        {
            if (!map2.contains(key1))
                return false;

            for (auto[key2, value2] : map2)
            {
                if (value1 == value2)
                    valueExists = true;
                else
                    valueExists = false;
            }
        }

        if (valueExists)
            return true;
        
        return false;
    }
};
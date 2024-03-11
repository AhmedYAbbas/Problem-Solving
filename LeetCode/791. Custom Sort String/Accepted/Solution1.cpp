class Solution 
{
public:
    string customSortString(string order, string s) 
    {
        std::unordered_map<char, int> map;
        std::string sortedS;
        
        for (char ch : order)
            map[ch] = 0;

        for (char ch : s)
        {
            if (map.contains(ch))
                map[ch]++;
        }

        for (char ch : order)
        {
            sortedS.append(map[ch], ch);
        }

        for (char ch : s)
        {
            if (!map.contains(ch))
                sortedS.push_back(ch);
        }

        return sortedS;
    }
};
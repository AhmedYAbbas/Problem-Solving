class Solution 
{
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        std::unordered_map<int, int> map;
        for (int num : arr)
            map[num]++;

        for (auto it1 = map.begin(); it1 != map.end(); it1++)
        {
            for (auto it2 = map.begin(); it2 != map.end(); it2++)
            {
                if (it1 == it2)
                    continue;

                if (it1->second == it2->second)
                    return false;
            }
        }

        return true;
    }
};
class Solution 
{
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        std::unordered_map<int, int> map;
        for (int num : arr)
            map[num]++;

        std::unordered_set<int> set;
        for (auto[key, value] : map)
        {
            if (set.count(value) > 0)
                return false;

            set.insert(value);
        }

        return true;
    }
};
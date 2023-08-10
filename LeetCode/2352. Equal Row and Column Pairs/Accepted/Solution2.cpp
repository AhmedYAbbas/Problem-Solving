class Solution 
{
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        int equalPairsCount = 0;
        std::map<std::vector<int>, int> map;

        for (int i = 0; i < grid.size(); i++)
            map[grid[i]]++;

        for (int i = 0; i < grid.size(); i++)
        {
            std::vector<int> col;
            for (int j = 0; j < grid.size(); j++)
                col.push_back(grid[j][i]);

            auto it = map.find(col);
            if (it != map.end())
                equalPairsCount += it->second;    
        }

        return equalPairsCount;
    }
};
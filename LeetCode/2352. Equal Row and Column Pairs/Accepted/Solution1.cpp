class Solution 
{
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        int equalPairsCount = 0;
        std::unordered_map<int, std::vector<int>> map;

        for (int i = 0; i < grid.size(); i++)
        {
            std::vector<int> col;
            for (int j = 0; j < grid.size(); j++)
            {
                col.push_back(grid[j][i]);
            }

            map[i] = col;
        }

        for (int i = 0; i < grid.size(); i++)
        {
            for (auto[key, value] : map)
            {
                if (value == grid[i])
                    equalPairsCount++;
            }
        }

        return equalPairsCount;
    }
};
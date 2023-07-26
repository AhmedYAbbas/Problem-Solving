// https://leetcode.com/problems/can-place-flowers

class Solution 
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int canPlace = 0;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (i == 0 && flowerbed[i] != 1 && flowerbed[i + 1] != 1)
            {
                flowerbed[i] = 1;
                canPlace++;
            }
            else if (i == flowerbed.size() - 1 && flowerbed[i] != 1 && flowerbed[i - 1] != 1)
            {
                flowerbed[i] = 1;
                canPlace++;
            }
            else if (flowerbed[i] != 1 && flowerbed[i - 1] != 1 && flowerbed[i + 1] != 1)
            {
                flowerbed[i] = 1;
                canPlace++;
            }
        }

        return canPlace >= n;
    }
};
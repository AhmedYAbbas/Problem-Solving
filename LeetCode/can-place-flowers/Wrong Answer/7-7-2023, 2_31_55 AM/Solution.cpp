// https://leetcode.com/problems/can-place-flowers

class Solution 
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int canPlace = 0;
        for (int i = 1; i < flowerbed.size() - 1; i++)
        {
            if (!(flowerbed[i - 1] == 1 || flowerbed[i + 1] == 1) && flowerbed[i] != 1)
            {
                flowerbed[i] = 1;
                canPlace++;
            }
        }

        return canPlace >= n;
    }
};
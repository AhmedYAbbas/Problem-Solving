// https://leetcode.com/problems/can-place-flowers

class Solution 
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int canPlace = 0;
        int i = 0;
        while (i < flowerbed.size() - 1)
        {
            if (flowerbed[i] != 1 && flowerbed[i + 1] != 1)
                canPlace++;
                
            i += 2;
        }

        return canPlace >= n;
    }
};
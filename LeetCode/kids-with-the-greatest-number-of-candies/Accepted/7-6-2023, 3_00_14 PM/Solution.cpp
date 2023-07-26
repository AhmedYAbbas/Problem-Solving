// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution 
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int max = *(std::max_element(candies.begin(), candies.end()));
        std::vector<bool> maxCandies;
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= max)
                maxCandies.push_back(true);
            else
                maxCandies.push_back(false);
        }

        return maxCandies;
    }
};
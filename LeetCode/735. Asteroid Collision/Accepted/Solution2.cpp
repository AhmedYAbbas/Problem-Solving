class Solution 
{
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        std::vector<int> ans;
        for (int asteroid : asteroids)
        {
            if (ans.empty() || asteroid > 0)
            {
                ans.push_back(asteroid);
                continue;   
            }

            while (!ans.empty() && ans.back() > 0 && ans.back() < std::abs(asteroid))
                ans.pop_back();

            if (!ans.empty() && ans.back() == std::abs(asteroid))
                ans.pop_back();
            else if (ans.empty() || ans.back() < 0)
                ans.push_back(asteroid);
        }

        return ans;
    }
};
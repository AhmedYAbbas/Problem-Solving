class Solution 
{
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        std::stack<int> stack;
        for (int asteroid : asteroids)
        {
            if (stack.empty() || asteroid > 0)
            {
                stack.push(asteroid);
                continue;
            }

            while (!stack.empty() && stack.top() > 0 && stack.top() < std::abs(asteroid))
                stack.pop();

            if (!stack.empty() && stack.top() == std::abs(asteroid))
                stack.pop();
            if (!stack.empty() && stack.top() < 0)
                stack.push(asteroid);
        }

        std::vector<int> ans(stack.size());
        for (int i = stack.size() - 1; i >= 0; i--)
        {
            ans[i] = stack.top();
            stack.pop();
        }

        return ans;
    }
};
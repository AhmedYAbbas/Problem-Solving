class Solution 
{
public:
    string removeStars(string s) 
    {
        std::stack<char> stack;
        for (char ch : s)
        {
            if (ch == '*')
                stack.pop();
            else
                stack.push(ch);
        }

        std::string ans;
        while (stack.size() > 0)
        {
            ans += stack.top();
            stack.pop();
        }

        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};
class Solution 
{
public:
    string decodeString(string s) 
    {
        std::stack<char> stack;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ']')
                stack.push(s[i]);
            else
            {
                std::string current = "";
                while (stack.top() != '[')
                {
                    current = stack.top() + current;
                    stack.pop();
                }

                stack.pop();

                std::string num = "";
                while (!stack.empty() && std::isdigit(stack.top()))
                {
                    num = stack.top() + num;
                    stack.pop();
                }

                int k = std::stoi(num);
                while (k--)
                {
                    for (int j = 0; j < current.size(); j++)
                        stack.push(current[j]);
                }
            }
        }

        std::string ans = "";
        while (!stack.empty())
        {
            ans = stack.top() + ans;
            stack.pop();
        }

        return ans;
    }
};
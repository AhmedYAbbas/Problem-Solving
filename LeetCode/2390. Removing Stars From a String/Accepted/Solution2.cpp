class Solution 
{
public:
    string removeStars(string s) 
    {
        std::string answer;
        for (char ch : s)
        {
            if (ch == '*')
                answer.pop_back();
            else
                answer.push_back(ch);
        }

        return answer;
    }
};
class Solution 
{
public:
    string removeStars(string s) 
    {
        int j = 0;
        std::vector<char> chars(s.size());

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
                j--;
            else
                chars[j++] = s[i];
        }

        std::string answer;
        for (int i = 0; i < j; i++)
            answer.push_back(chars[i]);

        return answer;
    }
};
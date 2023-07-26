// https://leetcode.com/problems/string-compression

class Solution 
{
public:
    char IntToChar(int value)
    {
        std::string str = std::to_string(value);
        return str[0];
    }

    int compress(vector<char>& chars) 
    {
        int j = 0, count = 1;

        if (chars.size() < 2)
            return chars.size();

        for (int i = 1; i < chars.size(); i++)
        {
            if (chars[i] == chars[i - 1])
                count++;

            if (chars[i] != chars[i - 1] && count > 1 || i == chars.size() - 1 && count > 1)
            {
                chars[j++] = chars[i - 1];
                if (count >= 10)
                {
                    chars[j++] = IntToChar(count / 10);
                    chars[j++] = IntToChar(count % 10);
                }
                else
                {
                    chars[j++] = IntToChar(count);
                }
                count = 1;
            }
            else if (chars[i] != chars[i - 1] && count == 1)
                chars[j++] = chars[i - 1];

            if (i == chars.size() - 1 && count == 1)
                chars[j++] = chars[i];
        }
        chars.resize(j);
        return chars.size();
    }
};
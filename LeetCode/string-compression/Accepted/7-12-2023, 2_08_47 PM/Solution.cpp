// https://leetcode.com/problems/string-compression

class Solution 
{
public:
    int compress(vector<char>& chars) 
    {
        int i = 0, res = 0;
        while (i < chars.size())
        {
            int groupLength = 1;
            while (i + groupLength < chars.size() && chars[i] == chars[i + groupLength])
            {
                groupLength++;
            }
            chars[res++] = chars[i];

            if (groupLength > 1)
            {
                for (char c : std::to_string(groupLength))
                    chars[res++] = c;
            }
            i += groupLength;
        }

        return res;
    }
};
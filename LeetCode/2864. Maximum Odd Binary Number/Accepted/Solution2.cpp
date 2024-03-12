class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int oneCount = 0;
        for (char digit : s)
        {
            if (digit == '1')
                oneCount++;
        }

        std::string result(--oneCount, '1');
        result.append(s.size() - oneCount - 1, '0');
        result.push_back('1');
        return result;
    }
};
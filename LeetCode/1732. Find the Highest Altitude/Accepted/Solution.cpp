class Solution 
{
public:
    int largestAltitude(vector<int>& gain)  
    {
        for (int i = 0; i < gain.size(); i++)
        {
            if (i == 0)
                continue;
            
            gain[i] += gain[i - 1];
        }

        int highest = *std::max_element(gain.begin(), gain.end());;

        if (highest < 0)
            return 0;

        return highest;
    }
};
class Solution 
{
public:
    string predictPartyVictory(string senate) 
    {
        int rCount = 0, dCount = 0;
        for (int ch : senate)
        {
            if (ch == 'R')
                rCount++;
            else
                dCount++;
        }

        if (dCount == rCount)
            return senate[0] == 'D'? "Dire" : "Radiant";
        else if (dCount > rCount)
            return "Dire";
        else
            return "Radiant";
    }
};
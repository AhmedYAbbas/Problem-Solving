class RecentCounter 
{
public:
    RecentCounter() 
        : count(0)
    {
    }
    
    int ping(int t) 
    {
        m_Pings.push(t);
        std::queue<int> temp = m_Pings;
        count = 0;
        while (!temp.empty())
        {
            if (temp.front() >= t - 3000 && temp.front() <= t)
                count++;

            temp.pop();
        }

        return count;
    }

private:
    int count;
    std::queue<int> m_Pings;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
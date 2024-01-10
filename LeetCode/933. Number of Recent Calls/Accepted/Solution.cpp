class RecentCounter 
{
public:
    RecentCounter() 
    {
    }
    
    int ping(int t) 
    {
        m_Pings.push(t);
        while (m_Pings.front() < t - 3000)
        {
            m_Pings.pop();
        }

        return m_Pings.size();
    }

private:
    std::queue<int> m_Pings;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
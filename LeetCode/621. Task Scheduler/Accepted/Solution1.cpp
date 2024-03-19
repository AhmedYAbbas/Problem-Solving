class Solution
{
public:
    int leastInterval(vector<char>& tasks, int n)
    {
        std::unordered_map<int, int> map;
        std::priority_queue<int> pq;
        for (char ch : tasks)
            map[ch]++;
        for (auto[key, value] : map)
            pq.push(value);

        int time = 0;
        while (!pq.empty())
        {
            int cycle = n + 1;
            int taskCount = 0;
            std::vector<int> vec;
            while (cycle-- && !pq.empty())
            {
                if (pq.top() > 1)
                    vec.push_back(pq.top() - 1);

                pq.pop();
                taskCount++;
            }

            for (int i : vec)
                pq.push(i);

            time += pq.empty() ? taskCount : n + 1;
        }
        return time;
    }
};
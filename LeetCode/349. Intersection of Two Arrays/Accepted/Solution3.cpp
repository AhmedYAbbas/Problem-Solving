class Solution 
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        std::unordered_map<int, int> map;
        std::vector<int> intersectionVec;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (!map.contains(nums1[i]))
                map[nums1[i]]++;
        }

        for (int j = 0; j < nums2.size(); j++)
        {
            if (map.contains(nums2[j]))
                map[nums2[j]]++;
        }

        for (auto kvp : map)
        {
            if (kvp.second > 1)
                intersectionVec.push_back(kvp.first);
        }

        return intersectionVec;
    }
};
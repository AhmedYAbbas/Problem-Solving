class Solution 
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        std::vector<int> intersectionVec;
        std::unordered_set<int> set1(nums1.begin(), nums1.end());
        std::unordered_set<int> set2(nums2.begin(), nums2.end());

        if (set2.size() < set1.size())
            intersection(nums2, nums1);

        for (int num : set1)
        {
            if (set2.contains(num))
                intersectionVec.push_back(num);
        }

        return intersectionVec;
    }
};
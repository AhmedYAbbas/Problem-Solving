class Solution 
{
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        std::unordered_set<int> set;
        std::vector<std::vector<int>> answer;
        for (int i : nums1)
        {
            if (std::find(nums2.begin(), nums2.end(), i) == nums2.end())
                set.insert(i);
        }
        
        for (int i : nums2)
        {
            if (std::find(nums1.begin(), nums1.end(), i) == nums1.end())
                set.insert(i);
        }

        std::vector<int> answer1;
        std::vector<int> answer2;
        for (int elem : set)
        {
            if (std::find(nums1.begin(), nums1.end(), elem) != nums1.end())
                answer1.push_back(elem);
            else
                answer2.push_back(elem);
        }

        answer.push_back(answer1);
        answer.push_back(answer2);

        return answer;
    }
};
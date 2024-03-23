/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
public:
    bool isPalindrome(ListNode* head) 
    {
        std::vector<ListNode*> vec;
        while (head)
        {
            vec.push_back(head);
            head = head->next;
        }

        int n = vec.size();
        for (int i = 0; i < n / 2; i++)
        {
            int j = n - i - 1;
            if (vec[i]->val != vec[j]->val)
                return false;
        }
        return true;
    }
};
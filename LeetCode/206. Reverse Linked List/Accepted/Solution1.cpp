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
    ListNode* reverseList(ListNode* head) 
    {
        std::vector<ListNode*> vec;
        ListNode* start = head;

        if (!head)
            return head;

        while (start)
        {
            vec.push_back(start);
            start = start->next;
        }

        head = vec[vec.size() - 1];
        for (int i = vec.size() - 1; i > 0; i--)
        {
            vec[i]->next = vec[i - 1];

            if (i == 1)
                vec[i - 1]->next = nullptr;
        }

        return head;
    }
};
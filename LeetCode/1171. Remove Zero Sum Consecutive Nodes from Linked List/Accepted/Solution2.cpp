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
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        std::unordered_map<int, ListNode*> map;
        ListNode* front = new ListNode(0, head);
        ListNode* current = front;
        int sum = 0;
        while (current)
        {
            sum += current->val;
            map[sum] = current;
            current = current->next;
        }

        sum = 0;
        current = front;
        while (current)
        {
            sum += current->val;
            current->next = map[sum]->next;
            current = current->next;
        }

        return front->next;
    }
};
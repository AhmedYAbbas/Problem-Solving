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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        int count = 1;
        ListNode* first = list1;
        ListNode* second = list1->next;
        while (count < b && second->next)
        {
            if (count == a - 1)
                first = second;
            second = second->next;
            count++;
        }

        first->next = list2;
        while (first->next)
            first = first->next;

        first->next = second->next;
        return list1;
    }
};
// https://leetcode.com/problems/linked-list-cycle-ii

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    ListNode *detectCycle(ListNode *head) 
    {
        int pos = 0;
        unordered_map<ListNode*, int> nodes;

        ListNode* ptr = head;
        while (ptr != nullptr)
        {
            if (nodes.find(ptr) != nodes.end())
                return ptr;

            nodes[ptr] = pos;
            pos++;

            ptr = ptr->next;
        }
        return nullptr;
    }
};
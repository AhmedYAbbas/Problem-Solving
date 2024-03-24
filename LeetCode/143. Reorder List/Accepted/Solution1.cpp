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
    void reorderList(ListNode* head)
    {
        ListNode* mid = FindMid(head);
        ListNode* reversed = ReverseList(mid);
        ListNode* revNext, *headNext;
        while (head && reversed)
        {
            headNext = head->next;
            revNext = reversed->next;
            head->next = reversed;
            reversed->next = headNext;
            head = headNext;
            reversed = revNext;
        }

        if (head && head->next)
            head->next->next = nullptr;
    }

private:
    ListNode* FindMid(ListNode* head)
    {
        ListNode* slow = head, *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* ReverseList(ListNode* head)
    {
        ListNode* prev = nullptr, *curr = head;
        while (curr)
        {
            curr = head->next;
            head->next = prev;
            prev = head;
            head = curr;
        }
        return prev;
    }
};
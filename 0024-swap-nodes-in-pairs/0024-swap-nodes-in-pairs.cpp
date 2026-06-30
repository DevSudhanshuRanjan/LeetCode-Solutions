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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL or head->next == NULL)
            return head;
        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) {
            swap(temp);

            if (temp->next == NULL)
                break;

            temp = temp->next->next;
        }
        return head;
    }

    ListNode* swap(ListNode* x) {
        int temp = x->val;
        x->val = x->next->val;
        x->next->val = temp;
        return x;
    }
};
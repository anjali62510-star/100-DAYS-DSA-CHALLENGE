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
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* first = head;
        ListNode* second = head;
        ListNode* temp = head;

        // Move temp to the k-th node from the beginning
        for (int i = 1; i < k; i++) {
            temp = temp->next;
        }

        first = temp;

        // Move temp to the end, and second will reach k-th from the end
        while (temp->next != nullptr) {
            temp = temp->next;
            second = second->next;
        }

        swap(first->val, second->val);

        return head;
    }
};
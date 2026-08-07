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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while (head != nullptr) {

            // Check if current node is the start of duplicates
            if (head->next != nullptr && head->val == head->next->val) {

                int duplicateValue = head->val;

                // Skip all nodes with the duplicate value
                while (head != nullptr && head->val == duplicateValue) {
                    head = head->next;
                }

                prev->next = head;
            }
            else {
                prev = prev->next;
                head = head->next;
            }
        }

        return dummy->next;
    }
};
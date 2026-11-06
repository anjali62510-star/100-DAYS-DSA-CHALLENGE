class Solution {
public:

    TreeNode* sortedListToBST(ListNode* head) {

        // Base condition: empty list
        if (head == nullptr) {
            return nullptr;
        }

        // If only one node is present
        if (head->next == nullptr) {
            return new TreeNode(head->val);
        }

        // Slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Find the middle node
        while (fast != nullptr && fast->next != nullptr) {

            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Middle node becomes root
        TreeNode* root = new TreeNode(slow->val);

        // Disconnect left half from middle
        prev->next = nullptr;

        // Build left subtree
        root->left = sortedListToBST(head);

        // Build right subtree
        root->right = sortedListToBST(slow->next);

        return root;
    }
};
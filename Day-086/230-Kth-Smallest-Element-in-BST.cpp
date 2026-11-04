class Solution {
public:
    int count = 0;
    int answer = -1;

    void inorder(TreeNode* root, int k) {

        // Base condition
        if (root == nullptr || count >= k) {
            return;
        }

        // Step 1: Traverse left subtree
        inorder(root->left, k);

        // Step 2: Visit current node
        count++;

        // Check if this is the kth smallest element
        if (count == k) {
            answer = root->val;
            return;
        }

        // Step 3: Traverse right subtree
        inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {

        inorder(root, k);

        return answer;
    }
};
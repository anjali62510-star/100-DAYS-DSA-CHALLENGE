class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // If root is NULL, p, or q
        if (root == nullptr || root == p || root == q) {
            return root;
        }

        // Search in left subtree
        TreeNode* left = lowestCommonAncestor(root->left, p, q);

        // Search in right subtree
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // p and q are found in different subtrees
        if (left != nullptr && right != nullptr) {
            return root;
        }

        // Return whichever side contains p or q
        if (left != nullptr) {
            return left;
        }

        return right;
    }
};
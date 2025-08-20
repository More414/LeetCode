/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    // Helper function that fills 'ans' with preorder traversal
    void fromAns(TreeNode* root, vector<int> &ans) {
        if (root == nullptr) return;   // Base case: if node is NULL, stop

        ans.push_back(root->val);      // 1. Visit root (store its value)

        fromAns(root->left, ans);      // 2. Traverse left subtree
        fromAns(root->right, ans);     // 3. Traverse right subtree
    }

    // Main function called by user
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;               // Result vector to store preorder values
        fromAns(root, ans);            // Start traversal from root
        return ans;  
    }
};
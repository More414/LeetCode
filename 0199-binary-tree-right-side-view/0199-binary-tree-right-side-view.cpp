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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        
        vector<int>ans;
        if(!root)  // if root is null then return ans
        return ans;

        q.push(root);

        while(!q.empty()){ //run till queue  is 0
            int n=q.size();
            ans.push_back(q.front()->val);

            while(n--){
                TreeNode *temp=q.front();
                q.pop();
                if(temp->right) // if you right here temp->left then it becomes left view
                q.push(temp->right);// if you right here temp->left then it becomes left view

                if(temp->left) // if you right here temp->right then it becomes left view
                q.push(temp->left); // if you right here temp->right then it becomes left view
            }
        }

        return ans;
        
    }
};
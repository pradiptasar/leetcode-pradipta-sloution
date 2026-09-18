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

    vector<vector<int>> ans;

    void backtracking(TreeNode* root, int targetSum, vector<int> &curr,int &sum){

        if(!root) return;

        TreeNode* node =root;

        curr.push_back(node->val);
        sum += node->val;

        if(sum == targetSum && !node->left && !node->right){
            ans.push_back(curr);
        }
        
        else{
        if(node->left){
            backtracking(node->left, targetSum,curr,sum);
        }
        if(node->right){
            backtracking(node->right, targetSum, curr, sum);
        }
        }
        curr.pop_back();
        sum -= node->val;

    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum =0;
        vector<int> curr;
        backtracking(root,targetSum,curr,sum);
        return ans;
    }
};
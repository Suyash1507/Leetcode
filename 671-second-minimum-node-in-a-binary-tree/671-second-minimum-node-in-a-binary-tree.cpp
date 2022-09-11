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
    void inorder(TreeNode *root,vector<int> &v){
        
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        inorder(root->left,v);
        inorder(root->right,v);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        sort(ans.begin(),ans.end());
        int n=ans.size()-1;
    int count =0;
    int i=0;
    while(n>i){
        if(ans[i]<ans[i+1]){
            count++;
        }
        if(count ==1){
            return ans[i+1];
        }
        else{
            i++;
        }
    }
    return -1;
    }
};
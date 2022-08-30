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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int a=0;
    	queue<TreeNode*>q;
    	q.push(root);
    	vector<vector<int>>v;
    	if(root==NULL){
    	    return v;
    	}
        while(!q.empty()){
            int n= q.size();
            vector<int> ans;
            for(int i=0;i<n;i++){
                TreeNode *temp= q.front();
                q.pop();
                ans.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            if(a==0){
                v.push_back(ans);
                a=1;
            }
            else if(a==1){
                reverse(ans.begin(),ans.end());
                v.push_back(ans);
                a=0;
            }
        }
        return v;
    }
};
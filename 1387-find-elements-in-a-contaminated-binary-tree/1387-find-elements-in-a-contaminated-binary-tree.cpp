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
class FindElements {
public:
    TreeNode *node;
    void dfs(TreeNode* root) {
        if(root==nullptr)return;

        if(root->left){
            root->left->val=2*(root->val)+1;
            dfs(root->left);
        }
        if(root->right) {
            root->right->val=2*(root->val)+2;
            dfs(root->right);
        }
    }
    FindElements(TreeNode* root) {
        root->val=0;
        dfs(root);
        node=root;
    }
    
    bool check(TreeNode* root, int target) {
        if(!root)return false;

        if(root->val == target)return true;

        return check(root->left,target) || check(root->right,target);
    }
    bool find(int target) {
        return check(node, target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
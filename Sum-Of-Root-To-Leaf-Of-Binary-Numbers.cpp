// Sum of Root to Leaf of Binary Numbers
// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/


class Solution {
public:
    
    int sum = 0;
    
    void preOrder(TreeNode *root, string &s){
        
        if(!root) return;
        s += to_string(root->val);
        if(!root->left and !root->right) sum += stoi(s, 0, 2);
        preOrder(root->left, s);
        preOrder(root->right, s);
        s.pop_back();
    }
    
    int sumRootToLeaf(TreeNode* root) {
        
        if(!root) return 0;
        
        string s;
        preOrder(root,s);
        
        return sum;
    }
};
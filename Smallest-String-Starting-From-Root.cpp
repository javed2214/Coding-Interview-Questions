// Smallest String Starting from Root
// https://leetcode.com/problems/smallest-string-starting-from-leaf/


class Solution {
public:
    
    void getString(TreeNode *root, string &s, vector<string> &v){
        
        if(!root) return;
        s += char(root->val + 'a');
        if(!root->left and !root->right){
            string st = s;
            reverse(st.begin(),st.end());
            v.push_back(st);
        }
        getString(root->left, s, v);
        getString(root->right, s, v);
        s.pop_back();
    }
    
    string smallestFromLeaf(TreeNode* root) {
        
        vector<string> v;
        string s;
        
        getString(root,s,v);
        
        sort(v.begin(),v.end());
        
        if(!v.empty()) return v[0];
        else return "";
    }
};
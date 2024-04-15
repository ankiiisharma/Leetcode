class Solution {

public:

    int Solve(TreeNode* root, int current){
        if(!root)
            return 0;

        current = (current*10) + root->val;
        
        if(!root->left && !root->right){
            return current;
        }

        int l = Solve(root->left, current);
        int r = Solve(root->right, current);

        return l + r;
    }

    int sumNumbers(TreeNode* root) {
      return Solve(root, 0);   
    }
};
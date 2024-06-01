#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
}

TreeNode* createBinaryTree(vector<int>&nodes){
    if(nodes.empty()) return nullptr;

    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> nodeQueue;
    nodeQueue.push(root);

    for(int i=1;i<nodes.size();i+=2){
        TreeNode* current = nodeQueue.front();
        nodeQueue.pop();

        if(nodes[i] != NULL){
            current -> left = new TreeNode(nodes[i]);
            nodeQueue.push(current->left);
        }

        if(i+1 < nodes.size() && nodes[i+1] != NULL){
            current->right = new TreeNode(nodes[i+1]);
            nodeQueue.push(current->right);
        }

    }
    return root;
}

int main()
{
    vector<int>nodes = {2,1,3,null,null,0,1};
    TreeNode* root = createBinaryTree(nodes);
    return 0;
}
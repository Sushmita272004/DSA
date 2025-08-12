#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(NULL), right(NULL){};
};

int height(TreeNode* root, int& diameter){
    if (!root) return 0;
    int lh = height(root->left, diameter);
    int rh = height(root->right,diameter);
    diameter=max(diameter, lh+rh);
    return 1 + max(lh,rh);
}

int diameterOfBinaryTree(TreeNode* root){
    int diameter = 0;
    height(root, diameter);
    return diameter;
    }


int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(6);
    root->right->left->left = new TreeNode(5);
    root->right->right->right = new TreeNode(7);
    root->right->right->right->right = new TreeNode(8);
    root->right->left->left->left = new TreeNode(9);
    root->right->left->left->left->left = new TreeNode(10);

    // Function to calculate the diameter of the tree
    int ans = diameterOfBinaryTree(root);
    cout<< "The diameter of the binary tree is: " << ans << endl;
    return 0;
}
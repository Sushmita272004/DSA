#include<iostream>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(NULL) ,right(NULL){};
};

int maxdepth(TreeNode * root){
    if (root==NULL) return 0;

    int lr= maxdepth(root->left);
    int rr= maxdepth(root->right);
    return 1+ max(lr,rr);

}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    root->right->left->left = new TreeNode(6);
    root->right->left->left->left = new TreeNode(7);

    int depth = maxdepth(root);
    cout<<"the meximum depth of the tree is : "<< depth <<endl;
    return 0;
}
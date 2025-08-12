#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val): data(val), left(NULL), right(NULL){};
};

void inOrder(vector<int>& ans, TreeNode* root){
    if (root == NULL) return;
    inOrder(ans,root->left);
    ans.push_back(root->data);
    inOrder(ans, root->right);
}
int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(3);
    root ->left->right = new TreeNode(4);
    root ->left->right->left = new TreeNode(5);
    root->left->right->right = new TreeNode(6);

    vector<int> ans;
    inOrder(ans, root);
     
    cout<<" the In-order traversal of the tree is: " << endl;
    for (int val : ans){
        cout<< val << " ";
    }
    return 0;
}
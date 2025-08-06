#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val ) : data(val) , left(NULL), right(NULL){};
};

void postOrder(TreeNode* root, vector<int>& ans){
    if(root == NULL) return;
    postOrder(root->left, ans);
    postOrder(root->right, ans);
    ans.push_back(root->data);

}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(3);
    root ->left->right = new TreeNode(4);
    root ->left->right->left = new TreeNode(5);
    root->left->right->right = new TreeNode(6);

    vector<int> ans;
    postOrder(root,ans);
    cout << "Post-order traversal of the tree is: " << endl;
    for(int val : ans){
        cout<< val << " ";
    }
    cout<<endl;
    return 0;
}

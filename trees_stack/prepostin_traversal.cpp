#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode (int val): data(val), left(NULL), right(NULL){};
    
};

vector<vector<int>> preinpost_traversal(TreeNode* root){
    stack<pair<TreeNode*, int>> st;
    st.push({root,1});
    
    vector<int> pre,in,post ;
    if (root == NULL) return {pre, in, post} ;

    while(!st.empty()){
        auto it = st.top();
        st.pop();

        if(it.second ==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left != NULL){
                st.push({it.first->left,1});
            }
        }
        else if (it.second == 2){
            in.push_back(it.first->data);
            it.second ++;
            st.push(it);
            if (it.first->right !=  NULL){
                st.push({it.first->right,1});
            }
        }
        else{
            post.push_back(it.first->data);
        }
    }
    return {pre, in, post};
}

int main(){
    TreeNode*root = new TreeNode(1);
    root->left = new TreeNode (2);
    root->right = new TreeNode (5);
    root->left->left = new TreeNode (3);
    root->left->right = new TreeNode (4);
    root->right->left = new TreeNode (6);
    root->right->right =new TreeNode(7);
    vector<vector<int>> ans = preinpost_traversal(root);

    cout<< "Pre-order traversal of the tree is: " << endl;
    for (int val : ans[0]) {
        cout << val << " ";
    }
    cout << endl;
    cout<< "In-order traversal of the tree is: " << endl;
    for (int val : ans[1]) {
        cout << val << " ";
    }
    cout << endl;
    cout<< "Post-order traversal of the tree is: " << endl;
    for (int val : ans[2]) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
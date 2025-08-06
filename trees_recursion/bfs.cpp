#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {};
};

vector<vector<int>> bfs(TreeNode* root){
    vector<vector<int>> ans;
    if (root==NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for (int i=0; i<size; i++){
            TreeNode* node = q.front();
            q.pop();
            level.push_back(node->data);

            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
        ans.push_back(level);    
    }
    return ans;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    cout<< "BFS traversal of the tree is: " << endl;
    vector<vector<int>> result = bfs(root);
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
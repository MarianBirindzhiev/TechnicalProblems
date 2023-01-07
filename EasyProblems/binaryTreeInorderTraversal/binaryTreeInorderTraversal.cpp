#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    
};

vector<int> inorderTraversal(TreeNode* root) 
{
    std::vector<int> a;
    inorderTraversalHelper(root, a);
    return a;
}
void inorderTraversalHelper(TreeNode* node, std::vector<int>& vec)
{
    if (!node)return;

    inorderTraversalHelper(node->left, vec);
    vec.push_back(node->val);
    inorderTraversalHelper(node->right, vec);
}

int main()
{
    
}



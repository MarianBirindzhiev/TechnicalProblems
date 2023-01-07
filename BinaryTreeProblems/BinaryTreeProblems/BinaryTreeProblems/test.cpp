#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>


 struct TreeNode 
 {
     int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
 void minDepthHelper(TreeNode* node, int& smallest, int currentSmallest)
 {
     if (!node) return;

     if(!node->left && !node->right)
         if (currentSmallest < smallest)
             smallest = currentSmallest;

     minDepthHelper(node->left, smallest, currentSmallest + 1);
     minDepthHelper(node->right, smallest, currentSmallest + 1);
 }
int minDepth(TreeNode* root) 
{
    int smallest = INT_MAX;
    minDepthHelper(root, smallest, 0);
    if (smallest == INT_MAX)
        return 0;
    return smallest;
}

int main()
{
    
}



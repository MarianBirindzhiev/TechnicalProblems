#include <iostream>
#include <vector>
#include <string>

class BST {
public:
    int value;
    BST* left;
    BST* right;

    BST(int val)
        :value(val){}
};

int findClosestValueInBst(BST* tree, int target);
int findClosestValueInBstHelper(BST* tree, int target, int closest);

int findClosestValueInBst(BST* tree, int target)
{
    return findClosestValueInBstHelper(tree, target, tree->value);
}

int findClosestValueInBstHelper(BST* tree, int target,int closest) 
{
    if (std::abs(target - closest) > std::abs(target - tree->value))
        closest =tree->value;

    if (target < tree->value && tree->left)
        return findClosestValueInBstHelper(tree->left, target, closest);
    else if (target > tree->value && tree->right)
        return findClosestValueInBstHelper(tree->right, target, closest);
    else
        return closest;
}


int main()
{
    BST* root = new BST(10);
    root->left = new BST(5);
    root->left->left = new BST(2);
    root->left->left->left = new BST(1);
    root->left->right = new BST(5);
    root->right = new BST(15);
    root->right->left = new BST(13);
    root->right->left->right = new BST(14);
    root->right->right = new BST(22);
    int actual = findClosestValueInBst(root, 12);
    std::cout << actual;
}



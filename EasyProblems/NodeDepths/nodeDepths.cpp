#include <iostream>
#include <vector>
#include <string>


using namespace std;

class BinaryTree {
public:
    int value;
    BinaryTree* left;
    BinaryTree* right;

    BinaryTree(int value) {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

int NodeDepthsHelper(BinaryTree* node, int level);

int nodeDepths(BinaryTree* root) {

    return NodeDepthsHelper(root,0);
}

int NodeDepthsHelper(BinaryTree* node, int level)
{
    if (node == nullptr) return 0;

    return level + NodeDepthsHelper(node->left, level + 1) + 
                   NodeDepthsHelper(node->right, level + 1);
}



int main()
{
    BinaryTree* root = new BinaryTree(1);
    root->left = new BinaryTree(1);
    root->left->left = new BinaryTree(4);
    root->left->left->left = new BinaryTree(8);
    root->left->left->right = new BinaryTree(9);
    root->left->right = new BinaryTree(5);
    root->right = new BinaryTree(3);
    root->right->left = new BinaryTree(6);
    root->right->right = new BinaryTree(7);
    int actual = nodeDepths(root);
    std::cout << actual;
}



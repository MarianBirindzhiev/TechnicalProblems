#include <iostream>
#include <vector>
#include <string>

using namespace std;

// This is the class of the input root. Do not edit it.
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


void branchHelper(BinaryTree* currentNode, int currentSum, std::vector<int>& sums)
{
    if (!currentNode) return;

    int newSum = currentNode->value + currentSum;
    if (!currentNode->left && !currentNode->right)
        sums.push_back(newSum);
    
    branchHelper(currentNode->left, newSum, sums);
    branchHelper(currentNode->right, newSum, sums);
}

vector<int> branchSums(BinaryTree* root) 
{
    std::vector<int> finalResult;
    branchHelper(root, 0, finalResult);
    return finalResult;
}
int main()
{
    
}



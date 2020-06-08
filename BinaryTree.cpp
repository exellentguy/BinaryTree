#include "BinaryTree.h"

TreeNode* BinaryTree::Search(TreeNode* const root, const int value) 
{
    if (nullptr == root)
        return nullptr;
    if (root->GetValue() == value)
        return root;
    if (value < root->GetValue())
        return Search(root->GetLeftNode(), value);
    else
        return Search(root->GetRightNode(), value);
}

TreeNode* BinaryTree::Insert(TreeNode* root, const int value) 
{
    if (nullptr == root) 
        root = new TreeNode(value);
    else
        if (root->GetValue() > value)
            root->SetLeftNode(Insert(root->GetLeftNode(), value));
        else
            root->SetRightNode(Insert(root->GetRightNode(), value));
    return root;
}

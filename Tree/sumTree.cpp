// Should return true if tree is Sum Tree, else false
/*
Given a Binary Tree. Return true if, for every node X in the tree 
other than the leaves, its value is equal to the sum of its left 
subtree's value and its right subtree's value. Else return false.

An empty tree is also a Sum Tree as the sum of an empty tree can be considered
to be 0. A leaf node is also considered a Sum Tree.
*/


class Solution
{
    public:
    bool isSumTree(Node* root)
    {
        int k= Check(root);
        if(k>0)
        {
            return 1;
        }
        return 0;
    }
    
    int Check(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL && root->right == NULL)
        {
            return root->data;
        }
     
        int lSub = Check(root->left);
        int rSub = Check(root->right);
        
        if(lSub + rSub == root->data)
        {
            return 2*(root->data);
        }
        return -(2*root->data);
    }
};
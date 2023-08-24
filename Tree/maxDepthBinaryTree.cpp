/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/


class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        // Your code here
        if(root == NULL)
        {
            return 0;
        }
        
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
    
    
        return 1+max(lh, rh);
    }
};


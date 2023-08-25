//Balanced binary Tree


class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return height(root) != -1;
    }
    
    int height(Node* root)
    {
        if(root == NULL)
            return 0;
        
        int ln = height(root->left);
        if(ln == -1) return -1;
        
        int rn = height(root->right);
        if(rn == -1) return -1;
        
        if(abs(ln-rn)>1)
            return -1;
            
        return 1+ max(ln,rn);
    }
};
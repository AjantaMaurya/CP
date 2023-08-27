/*
The diameter of a tree (sometimes called the width) is the number 
of nodes on the longest path between two end nodes. 
The diagram below shows two trees each with diameter nine, 
the leaves that form the ends of the longest path are shaded 
(note that there is more than one path in each tree of length nine, 
but no path longer than nine nodes). 
*/

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {

        int initialHeight = -1;
        height(root, initialHeight);
        return(initialHeight+1);
        
    }
    
    int height(Node* root, int &initialHeight)
    {
        
        if(root == NULL)
        {
            return 0;
        }
        
        int lh= height(root->left, initialHeight);
        int rh = height(root->right, initialHeight);
        
        if(lh+rh > initialHeight)
        {
            initialHeight = lh+rh;
        }
        return (1+max(lh, rh));
    }  
    
};
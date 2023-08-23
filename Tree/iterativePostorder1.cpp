//Iterative postorder traversal using two stacks

class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        stack<Node*> st1;
        stack<Node*> st2;
        
        vector<int> iterativePostorder;
        
        if(node == NULL) return iterativePostorder;
    
        st1.push(node);
        
        while(!st1.empty())
        {
            node = st1.top();
            st1.pop();
            st2.push(node);
            if(node->left != NULL)
                st1.push(node->left);
            if(node->right != NULL)
                st1.push(node->right);
        }
        
        while(!st2.empty())
        {
            
            iterativePostorder.push_back(st2.top()->data);
            st2.pop();
        }
        return iterativePostorder;
    }
};
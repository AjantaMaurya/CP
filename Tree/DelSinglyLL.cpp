Node* deleteNode(Node *head,int x)
{
    //Your code here
    int c = 1;
    
    Node* node = head;
    Node* prev = node;
    
    if(head==NULL)
    {
        return head;
    }
    
    while(c!=x)
    {
        prev = node;
        c++;
        node = node->next;
    }
    
    if(node == head)
    {
        return node->next;
    }
    
    prev->next = node->next;
    
    return head;
    
}

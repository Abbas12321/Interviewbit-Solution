TreeNode* makeTree(ListNode *&head, int start, int end){
    if(start > end){
        return NULL;
    }
    
    int mid = start + (end-start)/2;
    
    TreeNode* lft = makeTree(head, start, mid-1);
    
    TreeNode* root = new TreeNode(head->val);
    
    head = head->next;
    
    TreeNode* ryt = makeTree(head, mid+1, end);
    
    root->left = lft;
    root->right = ryt;
    
    return root;
} 
 
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A == NULL){
        return NULL;
    }
    
    int len = 0;
    ListNode* curr = A;
    
    while(curr != NULL){
        len++;
        curr = curr->next;
    }
    
    return makeTree(A, 0, len-1);
}

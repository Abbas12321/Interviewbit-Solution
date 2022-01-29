ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(!A || !A->next)
        return A;
        
    ListNode* head = A;
    while(A->next)
    {
        if(A->val == A->next->val)
           A->next = A->next->next;
        else
            A = A->next;
    }
    return head;
}

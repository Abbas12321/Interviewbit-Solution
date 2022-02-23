ListNode* Solution::solve(ListNode* A, int B) 
{
    if(!A)
    {
        return NULL;
    }
    int count=0;
    ListNode *curr=A,*later=NULL,*prev=NULL;
    while(curr && count<B)
    {
        later=curr->next;
        curr->next=prev;
        prev=curr;
        curr=later;
        count++;
    }
    if(curr)
    {
        A->next=curr;
        count=0;
        while(curr && count<B-1)
        {
            curr=curr->next;
            count++;
        }
        curr->next=solve(curr->next,B);
    }
    return prev;
}

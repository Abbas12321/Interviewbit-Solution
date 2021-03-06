ListNode* Solution::reorderList(ListNode* A) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    if(!A || !A->next)
        return A;
        
    //find middle: O(n)
    ListNode *slw = A, *fst = A;
    while(fst->next && fst->next->next)
    {
        slw = slw->next;
        fst = fst->next->next;
    }

    // cut from the middle and reverse the second half: O(n)
    ListNode *mid = slw, *preCurr = slw->next;
    while(preCurr->next)
    {
        ListNode *curr = preCurr->next;
        preCurr->next = curr->next;
        curr->next = mid->next;
        mid->next = curr;
    }

    // merge two lists: O(n)
    ListNode *p1 = A, *p2 = mid->next;
    while(p1 != mid)
    {
        mid->next = p2->next;
        p2->next = p1->next;
        p1->next = p2;
        p1 = p2->next;
        p2 = mid->next;
    }

    return A;
    
}

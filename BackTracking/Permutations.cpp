void permutation(vector<int> &A, int st, vector<vector<int> > &v)
{
    if(st >= A.size())
    {
        v.push_back(A);
        return;
    }
    for(auto i=st; i<A.size(); i++)
    {
        swap(A[st], A[i]);
        permutation(A, st+1, v);
        swap(A[st], A[i]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int> > v;
    
    permutation(A, 0, v);
    
    return v;
}

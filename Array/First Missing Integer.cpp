int Solution::firstMissingPositive(vector<int> &A) {
    int n=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>0) n++;
    }
    vector<bool>v(n+1,false);
    for(int i=0;i<A.size();i++){
        if(A[i]>0&&A[i]<=n) v[A[i]]=true;
    }
    for(int i=1;i<=n;i++){
        if(!v[i]) return i;
    }
    return n+1;
}

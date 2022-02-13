int Solution::maximumGap(const vector<int> &A) { 
    int n = A.size();
    if(n==1) return 0;
    vector<pair<int,int>>v(n,{INT_MAX,INT_MIN});
    int mn=INT_MAX,mx=INT_MIN; 
    for(int i=0;i<n;i++){
        mx = max(mx,A[i]); 
        mn = min(mn,A[i]);
    }
    double gap = (1.0*(mx+mn))/(n-1);
    
    for(int i=0;i<n;i++){
        if(A[i]==mn||A[i]==mx) continue; 
        int ind = (1.0*A[i])/gap;
        
        v[ind].first = min(v[ind].first,A[i]); 
        v[ind].second = max(v[ind].second,A[i]);
    }
    int ans=0,prev=mn; 
    for(int i=0;i<n;i++){
        if(v[i].first==INT_MAX) continue;
        ans = max(ans,v[i].first-prev); 
        prev = v[i].second;
    }
    ans = max(ans,mx-prev); 
    return ans;
}

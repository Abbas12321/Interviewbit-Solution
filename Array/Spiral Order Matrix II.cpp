vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> >res(A,vector<int>(A));
    int k=0,l=0,n=A,m=A,a=1;
    while(k<n&&l<m){
        for(int i=l;i<m;i++){
            res[k][i]=a++;
        }
        k++;
        for(int i=k;i<n;i++){
            res[i][m-1]=a++;
        }
        m--;
        if(k<n){
            for(int i=m-1;i>=l;i--){
                res[n-1][i]=a++;
            }
            n--;
        }
        if(l<m){
            for(int i=n-1;i>=k;i--){
                res[i][l]=a++;
            }
            l++;
        }
    }
    return res;
}

int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    auto n = A.size();
    int diff = INT_MAX;
    int result = 0;
    for (auto i = 0; i<n-2; ++i)
    {
        /*int sum = 0; 
        auto j = i;
        while (j<j+3)       //My flawed thinking that sum can be of only consecutive elements
            sum += A[j++];  //It could be A[i]+A[i+1]+A[n-1] also not necessarily alaways consecutive 3.
        int diff2;
        diff2 = (sum>B) ? (sum-B) : (B-sum);
        cout << diff2 << " ";
        if(diff2<diff)
        {
            result = sum; diff = diff2;
        }*/
        int l = i+1, r = n-1;
        while (l<r)
        {
            auto sum = A[i] + A[l] + A[r];
            auto diff2 = sum>B ? sum-B : B-sum;
            if(diff2<diff)
            {
                result = sum; diff = diff2;
            }
            if(sum>B)
                --r;
            else
                ++l;
        }
    }
    return result;
}

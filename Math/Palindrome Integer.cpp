int Solution::isPalindrome(int A) {
    if(A<0) return 0;
    string r,s;
    s=to_string(A);
    r=s;
    reverse(s.begin(),s.end());
    return r==s;
}

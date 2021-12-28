int helper(string &s,vector<int>&dp,int index)
{
    int mod=pow(10,9)+7;
    if(index==s.length())
    {
        return dp[index]=1;
    }
    if(s[index]=='0')
    {
        return dp[index]=0;
    }
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    if(dp[index+1]==-1)
    {
        dp[index+1]=(helper(s,dp,index+1)%mod);
    }
    int res=dp[index+1];
    if(index+1<s.length() && (s[index]=='1' || (s[index]=='2' && s[index+1]<='6')))
    {
        if(dp[index+2]==-1)
        {
            dp[index+2]=(helper(s,dp,index+2)%mod);
        }
        res=(res+dp[index+2])%mod;
    }
    return dp[index]=res;
}
int Solution::numDecodings(string A) 
{
    vector<int>dp(A.length()+1,-1);
    return helper(A,dp,0);
}

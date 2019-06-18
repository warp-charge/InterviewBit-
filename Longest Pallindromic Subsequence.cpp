int dp[1009][1009];
int lps(string s,int i,int j)
{
    if(i==j)
    return 1;
    if(i>j)
    return 0;

    if(dp[i][j]!=-1)
    return dp[i][j];

    if(s[i]==s[j])
    dp[i][j]=2+lps(s,i+1,j-1);
    else
    dp[i][j]=max(lps(s,i,j-1),lps(s,i+1,j));

    return dp[i][j];
}
int Solution::solve(string A) {
    int i,j,n=A.size();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            dp[i][j]=-1;
        }
    }
    return lps(A,0,n-1);
}

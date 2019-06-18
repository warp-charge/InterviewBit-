#define mod 1000000007
int Solution::solve(int A) {
    long long int i,j,n;
    long long int x,y,z;
    x=1;
    y=1;

    long long int ans=2;
    for(i=2;i<=A;i++)
    {
        z=x;
        ans=(((2%mod)*(y%mod))%mod+x%mod)%mod;
        x=y;
        y=(y+z)%mod;

    }
    return ans;
}

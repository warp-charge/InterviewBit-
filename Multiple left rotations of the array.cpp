vector<vector<int> > Solution::solve(vector<int> &a, vector<int> &b) {
    int i,j;
    int n1=a.size();
    int n2=b.size();

    vector<vector<int> > res;
    for(i=0;i<n2;i++)
    {
        vector<int> v;
        for(j=0;j<n1;j++)
        {
            int x=a[(j+b[i])%n1];
            v.push_back(x);
        }
        res.push_back(v);
    }
    return res;
}

//Below approach is O(n^2)-time and O(1)- space
//More optimized approach
string Solution::longestPalindrome(string A) {
    int i,j,n=A.size();
    //return lps(A,n);
    int maxlen=1,start=0,low,high;
    for(i=1;i<n;i++)
    {
        //even length palindromes
        low=i-1;
        high=i;
        while(low>=0 && high<n && A[low]==A[high])
        {
            if(high-low+1>maxlen)
            {
                maxlen=high-low+1;
                start=low;
            }

            low--;
            high++;
        }

        //odd length palindromes
        low=i-1;
        high=i+1;
        while(low>=0 && high<n && A[low]==A[high])
        {
            if(high-low+1>maxlen)
            {
                maxlen=high-low+1;
                start=low;
            }

            low--;
            high++;
        }
    }
    string ans=A.substr(start,maxlen);
    return ans;
}

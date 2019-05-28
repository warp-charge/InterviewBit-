vector<int> Solution::maxset(vector<int> &A) {
 int n=A.size();
 int i,j,start=0,end=0;
 int resStart=0,resEnd=-1,len=0,resLen=0;
 long long int sumNow=INT_MIN,maxSum=INT_MIN;

 for(i=0;i<n;i++)
 {
     if(A[i]>=0)
     {
         start=i;
         len=0;
         sumNow=0;
     }
     else if(A[i]<0)
     continue;
     while(A[i]>=0 && i<n)
     {
         sumNow+=A[i];
         i++;
     }
     end=i-1;
     if(sumNow>maxSum || (sumNow==maxSum && end-start+1 >resLen))
     {
         resStart=start;
         resEnd=end;
         maxSum=sumNow;
         resLen=end-start+1;
     }
 }
 vector<int> res;
 for(i=resStart;i<=resEnd;i++)
 {
     res.push_back(A[i]);
 }
 return res;
}

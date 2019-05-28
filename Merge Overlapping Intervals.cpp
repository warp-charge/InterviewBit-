/*
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

 bool cmp(Interval i1,Interval i2)
 {
     return i1.start<i2.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i,j,n=A.size(),start=0,end=0;
    vector<Interval> res;
    sort(A.begin(),A.end(),cmp);
    Interval it;
    it.start=A[0].start;
    it.end=A[0].end;
    for(i=1;i<n;i++)
    {
        if(A[i].start>it.end)
        {
            res.push_back(it);
            it.start=A[i].start;
            it.end=A[i].end;
        }
        else if(A[i].end>it.end)
        {
            it.end=A[i].end;
        }
    }
    res.push_back(it);
    return res;
}

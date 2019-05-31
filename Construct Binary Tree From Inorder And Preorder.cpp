/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* makeTree(vector<int> &A,vector<int> &B,int s,int e,map<int,int> &mp,int &j)
 {
    //  static int j=0;
     if(s>e)
     return NULL;
     int curr=A[j++];

     TreeNode* temp=new TreeNode(curr);
     if(s==e)
     return temp;

    int index=mp[curr];
    temp->left=makeTree(A,B,s,index-1,mp,j);
    temp->right=makeTree(A,B,index+1,e,mp,j);
    return temp;
 }
 TreeNode* build(vector<int> &A, vector<int> &B,int n)
 {
     map<int,int> mp;
     for(int i=0;i<n;i++)
     {
         mp[B[i]]=i;
     }
     int j=0;
     return makeTree(A,B,0,n-1,mp,j);
 }
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    if(A.empty() || B.empty())
    return NULL;
    int n=B.size();
    return build(A,B,n);
}

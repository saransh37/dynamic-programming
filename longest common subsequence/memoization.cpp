#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lcs(string x,string y,int n,int m,int t[][100]){
if(n==0||m==0)
    t[n][m]=0;
if(t[n][m]!=-1)
    return t[n][m];
else{
        if(x[n-1]==y[m-1]){
            t[n][m]=1+lcs(x,y,n-1,m-1,t);
            return t[n][m];
         }
        else{
            t[n][m]=max(lcs(x,y,n-1,m,t),lcs(x,y,n,m-1,t));
            return t[n][m];

         }
}

}
int main(){
   string x,y;//two string
   cin>>x>>y;
   int n=x.length();
   int  m=y.length();
   int t[100][100];
   memset(t,-1,sizeof(t));
   cout<<"the length of longest common subsequence:"<<lcs(x,y,n,m,t);
}


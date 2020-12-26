#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lcs(string x,string y,int n,int m){
int t[n+1][m+1];
for(int i=0;i<n+1;i++){
    for(int j=0;j<m+1;j++){
        if(i==0||j==0)
            t[i][j]=0;
        else{
             if(x[i-1]==y[j-1]){
             t[i][j]=1+t[i-1][j-1];
             }
            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
         }
     }
}
int ans;
ans=(n-t[n][m])+(m-t[n][m])+t[n][m];
return ans;
}
int main(){
   string x,y;//two string
   cin>>x>>y;
   int n=x.length();
   int  m=y.length();
   cout<<"the length of longest common subsequence:"<<lcs(x,y,n,m);
}

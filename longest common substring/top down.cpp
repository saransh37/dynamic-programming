#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lcs(string x,string y,int n,int m){
int t[n+1][m+1];
int res=0,val=-1;
for(int i=0;i<n+1;i++){
    for(int j=0;j<m+1;j++){
        if(i==0||j==0)
            t[i][j]=0;
        else{
            if(x[i-1]==y[j-1]){
                t[i][j]=1+t[i-1][j-1];
                res=max(val,t[i][j]);
            }

            else
                t[i][j]=0;

        }
     }
}
return res;
}

int main(){
   string x,y;//two string
   cin>>x>>y;
   int n=x.length();
   int  m=y.length();
   cout<<"the length of longest common substring:"<<lcs(x,y,n,m);
}

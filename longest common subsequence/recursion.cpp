#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lcs(string x,string y,int n,int m){
//base condition
if(n==0||m==0)
    return 0;
if(x[n-1]==y[m-1])
    return 1+lcs(x,y,n-1,m-1);
//choice diagram
else{
    return max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));
}
}
int main(){
   string x,y;//two string
   cin>>x>>y;
   int n=x.length();
   int  m=y.length();
   cout<<"the length of longest common subsequence:"<<lcs(x,y,n,m);
}

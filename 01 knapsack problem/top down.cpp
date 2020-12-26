
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[],int v[],int n,int W){
int t[n+1][W+1];
//base condition
//n==0 then return 0 and W==0 return 0
for(int i=0;i<n+1;i++)
    t[i][0]=0;
for(int i=0;i<W+1;i++)
    t[0][i]=0;
//rest of the condition
for(int i=1;i<n+1;i++){
    for(int j=1;j<W+1;j++){
        if(wt[i-1]<=j)
            t[i][j]=max(v[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
        else
            t[i][j]=t[i-1][j];

    }
}
return t[n][W];
}

int main(){
int n;// no of item present
cin>>n;
int wt[n],v[n];//weight array and value array
for(int i=0;i<n;i++)
    cin>>wt[i];
for(int i=0;i<n;i++)
    cin>>v[i];
int W;//capacity of knapsack or bag
cin>>W;
cout<<"Max profit :"<<knapsack(wt,v,n,W);//return the max profit from the given item.
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[],int v[],int n,int W){
//base condition
if(n==0||W==0)
    return 0;
if(wt[n-1]<=W)
    //either selected or not
    return max(v[n-1]+knapsack(wt,v,n-1,W-wt[n-1]),knapsack(wt,v,n-1,W));
else
    //will not be selected as weight>capacity
    return knapsack(wt,v,n-1,W);
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

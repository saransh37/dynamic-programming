#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int v[],int n,int W,int t[][100] ){
//base condition
if(n==0||W==0)
    return 0;
if(t[n][W]!=-1)//if already calculated then don't require to calculate
    return t[n][W];

else{
        if(wt[n-1]<=W){//either selected or not
                t[n][W]=max(v[n-1]+knapsack(wt,v,n-1,W-wt[n-1],t),knapsack(wt,v,n-1,W,t));
                return t[n][W];
                }
        else{//will not be selected as weight>capacity
                t[n][W]=knapsack(wt,v,n-1,W,t);
                return t[n][W];
                }
    }

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
int t[100][100];
memset(t,-1,sizeof(t));
cout<<"Max profit :"<<knapsack(wt,v,n,W,t);//return the max profit from the given item.
}

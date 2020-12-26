#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int sum,int t[][100]){
//base condition
if(sum==0)
    return 1;
else if(n==0)
    return 0;
if(t[n][sum]!=-1)
    return t[n][sum];
else{
    if(arr[n-1]<=sum)//two case either select or not
        return solve(arr,n-1,sum-arr[n-1],t)+solve(arr,n-1,sum,t);
    else //not select
        return solve(arr,n-1,sum,t);
}
}
//this problem is similar to the 0/1 knapsack problem so we applied the same  method
int main(){
int n;//size of the array
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
int sum;//require sum of any subset
cin>>sum;
int t[100][100];//set according to the constraint
memset(t,-1,sizeof(t));
cout<<"No of subset:"<<(solve(a,n,sum,t));
}

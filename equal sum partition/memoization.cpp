#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int n,int sum,int t[][100]){
//base condition
if(sum==0)
    return true;
else if(n==0)
    return false;
if(t[n][sum]!=-1)
    return t[n][sum];
else{
    if(arr[n-1]<=sum)//two case either select or not
        return solve(arr,n-1,sum-arr[n-1],t)||solve(arr,n-1,sum,t);
    else //not select
        return solve(arr,n-1,sum,t);
}
}
//this problem is similar to the 0/1 knapsack problem so we applied the same  method
int main(){
int n;//size of the array
cin>>n;
int a[n];
int sum=0;//sum of all element of array
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
if(sum%2==0){
   int t[100][100];//set according to the constraint
   memset(t,-1,sizeof(t));
   if(solve(a,n,sum/2,t))//return true if array can be divided into two subset with equal sum else return false
     cout<<"YES";
   else
     cout<<"NO";
}
else
    cout<<"NO";
}

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
int min=100000;
for(int i=0;i<=sum/2;i++){
        int t[100][100];//set according to the constraint
        memset(t,-1,sizeof(t));
       if(solve(a,n,i,t)){//return true if a subset with sum equal to given 'i' else return  false
       if(abs(2*i-sum)<min)
        min=abs(2*i-sum);
   }
}
int t[100][100];//set according to the constraint
memset(t,-1,sizeof(t));

}

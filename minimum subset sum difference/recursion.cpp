#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool solve(int arr[],int n,int sum){
//base condition
if(sum==0)
    return true;
else if(n==0)
    return false;
else{
    if(arr[n-1]<=sum)//two case either select or not
        return solve(arr,n-1,sum-arr[n-1])||solve(arr,n-1,sum);
    else //not select
        return solve(arr,n-1,sum);
}
}
//this problem is similar to the 0/1 knapsack problem so we applied the same  method
int main(){
int n;//size of the array
cin>>n;
int a[n];
int sum=0;//maximum sum of any subset or range
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
int min=INT_MAX;
for(int i=0;i<=sum/2;i++){
    if(solve(a,n,i)){//return true if a subset with sum equal to given 'i' else return  false
       if(abs(2*i-sum)<min)
        min=abs(2*i-sum);
   }
}
cout<<"Minimum difference of two subset: "<<min;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int sum){
//base condition
if(sum==0)
    return 1;
else if(n==0)
    return 0;
else{
    if(arr[n-1]<=sum)//two case either select or not
        return solve(arr,n-1,sum-arr[n-1])+solve(arr,n-1,sum);
    else //not select
        return solve(arr,n-1,sum);
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
cout<<"No. of subset:"<<(solve(a,n,sum));

}

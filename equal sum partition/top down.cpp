
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int n,int sum){
//base condition
bool t[n+1][sum+1];
//base condition
//if sum ==0 then always a empty subset present so answer is true
for(int i=0;i<n+1;i++)
    t[i][0]=true;
//when n==0and sum==0 also return true
for(int i=1;i<sum+1;i++)
    t[0][i]=false;
for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
        if(arr[i-1]<=j)
            t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
        else
            t[i][j]=t[i-1][j];
    }
}
return t[n][sum];
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
if(solve(a,n,sum/2))//return true if array can be divided into two subset with equal sum else return false
cout<<"YES";
else
cout<<"NO";
}
else
    cout<<"NO";
}

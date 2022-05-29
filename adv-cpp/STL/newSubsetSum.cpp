#include<bits/stdc++.h>
using namespace std;
int t[1000][1000];
bool isSubsetSum(int arr[],int n,int sum){
       if(n==0 || sum==0){
              if(sum==0){
                     return true;
              }
              else return false;
       }
       else if(t[n][sum]!=-1){
              return t[n][sum];
       }
       else{
              if(arr[n-1]<=sum){
                     return t[n][sum]=isSubsetSum(arr,n-1,sum-arr[n-1]) || isSubsetSum(arr,n-1,sum);
              }
              else return t[n][sum]=isSubsetSum(arr,n-1,sum);
       }
}
int main(){

int arr[100]={1,3,5,7,9};
int sum;
cout<<"Enter sum : ";
cin>>sum;
memset(t,-1,sizeof(t));
if(isSubsetSum(arr,5,sum)){
       cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
return 0;
}

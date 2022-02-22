#include<bits/stdc++.h>
using namespace std;
int t[100][100];


bool isSubsetSumFound(int arr[],int n,int sum){

if(n==0 || sum ==0){
       if(sum==0){
              return true;
       }
       else{
              return false;
       }
}
if(t[n][sum]!=-1){
       return t[n][sum];
}
if(arr[n-1]>sum){
       return t[n][sum]=isSubsetSumFound(arr,n-1,sum);
}
else if(arr[n-1]<=sum){
       return t[n][sum]=isSubsetSumFound(arr,n-1,sum) || isSubsetSumFound(arr,n-1,sum-arr[n-1]);

}

}

int main(){

int n;
cout<<"Enter n : ";
cin>>n;
int arr[100];
cout<<"Enter arr : ";
for(int i=0;i<n;i++){
       cin>>arr[i];
}
int sum;
cout<<"Enter sum : ";
cin>>sum;
t[n+1][sum+1];

memset(t,-1,sizeof(t));

if(isSubsetSumFound(arr,n,sum)){
       cout<<"Found";
}
else cout<<"Not found";


}

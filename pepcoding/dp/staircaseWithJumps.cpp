#include<bits/stdc++.h>
using namespace std;
int countWaysFor0toN(int n,int arr[]){
       int dp[n+1]={0};
       dp[n]=1;
       for(int i=n-1;i>=0;i--){
            for(int j=0;j<=arr[i] && i+j<=n;j++){
              dp[i]=dp[i]+dp[i+j];
            }
       }
       return dp[0];
}
int main(){

int n;
cout<<"Enter n: ";
cin>>n;

cout<<"Enter arr : ";
int arr[n];
for(int i=0;i<n;i++){
       cin>>arr[i];
}
cout<<countWaysFor0toN(n,arr);
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int maxVol(int n,int price[],int vol[], int k){
       if(k<=0 || n==0) return 0;
       if(k >= price[n-1]){
              return max(maxVol(n-1,price,vol,k),vol[n-1]+maxVol(n-1,price,vol,k-price[n-1]));
       } else return maxVol(n-1,price,vol,k);
}
int main(){

int n,k;
cin>>n>>k;
int price[n];
int vol[n];
for(int i=0 ;i<n;i++){
       cin>>price[i];
}
for(int i =0; i<n;i++){
       cin>>vol[i];
}
cout<<maxVol(n,price,vol,k);
return 0;
}

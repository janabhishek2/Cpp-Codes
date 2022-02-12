#include<bits/stdc++.h>
using namespace std;
int smallestMissingFromArr(int arr[],int n){

int size=1e5;
int max=-1;
int count[size]={0};
for(int i=0;i<n;i++){
if(arr[i]>0){
       if(max<arr[i]){
              max=arr[i];
       }
       count[arr[i]]++;
}
}
for(int i=1;i<size;i++){
       if(count[i]==0 && i<max){
              return i;
       }
}
return -1;
}
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
       cin>>arr[i];
}
int ans=smallestMissingFromArr(arr,n);
cout<<ans;
}

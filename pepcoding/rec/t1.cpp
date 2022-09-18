#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
       cin>>arr[i];
}
int neg[n];
int pos[n];
int sizeNeg=0;
int sizePos=0;
sort(arr,arr+n);
for(int i=0;i<n;i++){
       if(arr[i]<0){
              neg[sizeNeg]=arr[i];
              sizeNeg++;
       }
       else{
              pos[sizePos]=arr[i];
              sizePos++;
       }
}
int maxSum=0;
if(sizePos == 0){
       cout<<neg[0];
       return;
}
if(sizeNeg == 0){
       cout<<pos[0];
       return;
}
int newArr[];
int sizeNew=min(sizePos,sizeNeg);

return 0;
}

#include<bits/stdc++.h>

using namespace std;
void printArr(int arr[],int n){

cout<<endl;
for(int i=0;i<n;i++){
       cout<<arr[i]<< " ";
}
cout<<endl;
}
void reArrange(int arr[],int n){

int count[n]={0};
for(int i=0;i<n;i++){
       if(arr[i]!=-1){
              count[arr[i]]++;
       }
}
for(int i=0;i<n;i++){
       arr[i]=count[i]>0?i:-1;
}
return;
}
int main(){

int arr[]={19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4};
int n=sizeof(arr)/sizeof(int);

reArrange(arr,n);
printArr(arr,n);
return 0;
}

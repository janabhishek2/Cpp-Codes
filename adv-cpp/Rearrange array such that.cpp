#include<bits/stdc++.h>
using namespace std;
int * rearrange(int arr[],int n){

sort(arr,arr+n);
int *arr1=new int[n];
int j=0;
if((n-1)%2!=0){
     for(int i=n-2;i>=0;i=i-2){
       arr1[i]=arr[j];
       j++;
     }
     for(int i=1;i<n;i=i+2){
       arr1[i]=arr[j];
       j++;
     }
}
else {
       for(int i=n-1;i>=0;i=i-2){
       arr1[i]=arr[j];
       j++;
     }
     for(int i=1;i<n;i=i+2){
       arr1[i]=arr[j];
       j++;
     }
}
return arr1;
}
int main(){
int arr[100]={1,2,3,4,5,6,7};
int n=7;
int *newArr=rearrange(arr,n);
for(int i=0;i<n;i++){
       cout<<newArr[i]<<" ";
}
return 0;
}

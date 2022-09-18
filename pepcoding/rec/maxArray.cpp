#include<bits/stdc++.h>
using namespace std;

int maxArr(int arr[],int n){

if(n==1) return arr[0];
else return max(arr[n-1],maxArr(arr,n-1));

}

int mxArr(int arr[],int idx,int n){

if(idx==n-1){
       return arr[n-1];
}
return max(arr[idx],mxArr(arr,idx+1,n));

}
int main(){
int arr[5]={1};
cout<<"Maximum is : " << mxArr(arr,0,1);
return 0;
}

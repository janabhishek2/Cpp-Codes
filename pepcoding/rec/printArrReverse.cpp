#include<bits/stdc++.h>
using namespace std;
void displayArrReverse(int arr[],int idx,int n){
if(idx==n) return;
displayArrReverse(arr,idx+1,n);
cout<<arr[idx]<<endl;
}
int main(){
int arr[5]={1,2,3,4,5};
displayArrReverse(arr,0,5);
return 0;
}

#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[],int n){

cout<<endl;
for(int i=0;i<n;i++){
       cout<<arr[i]<< " ";
}
cout<<endl;
}
void reverse(int arr[],int start,int end){
     while(start<end){
       swap(arr[start],arr[end]);
       start++;
       end--;
     }
}

void reverseByD(int arr[],int n,int d){
       reverse(arr,0,d-1);

       reverse(arr,d,n-1);

       reverse(arr,0,n-1);

       return;
}
int main(){

int arr[]={1,2,3,4,5,6,7};
int d;
cout<<"Enter d : ";
cin>>d;


reverseByD(arr,sizeof(arr)/sizeof(int),d);
 printArr(arr,7);
return 0;
}

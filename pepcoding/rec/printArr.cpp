#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int idx){

     if(idx==n){ return ;}
     cout<<arr[idx]<<endl;
     print(arr,n,idx+1);
}
int main(){

int arr[5]={1,2,3,4,5};
print(arr,5,0);
return 0;
}

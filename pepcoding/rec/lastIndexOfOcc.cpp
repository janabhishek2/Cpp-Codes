#include<bits/stdc++.h>
using namespace std;
int lastIndex(int arr[], int n, int idx, int x){

       if(idx<=-1){
              return -1;
       }
       else if(arr[idx] == x){
              return idx;
       }
       else return lastIndex(arr,n,idx-1,x);
}
int main(){

int arr[] = {2,3,9,8,7,6,4,12,7,3,8};
int size = sizeof(arr)/sizeof(int);
cout<<lastIndex(arr,size,size-1,3);

return 0;
}

#include<bits/stdc++.h>
using namespace std;

int FO(int arr[], int n, int x, int idx){

       if(idx==n){
              return -1;
       }
       else if(arr[idx] == x){
              return idx;
       }
       else return FO(arr,n,x,idx+1);

}
int main(){

int arr[] = {2,3,9,8,7,6,4,12,7,3,8};
int size = sizeof(arr)/sizeof(int);
int x = 8;
cout<<FO(arr,size,333,0);
return 0;
}

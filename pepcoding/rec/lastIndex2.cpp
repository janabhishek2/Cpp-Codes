#include<bits/stdc++.h>
using namespace std;

int f(int arr[] , int n , int idx , int dt){

if(idx == n) return -1;
int li = f(arr, n, idx+1 ,dt);
if(arr[idx] == dt){
       return max(li,idx);
}
else return li;
}

int main(){
int arr[] = {2,3,9,8,7,6,4,12,7,3,8};
int size = sizeof(arr)/sizeof(int);

cout<<f(arr,size,0,0);
return 0;
}

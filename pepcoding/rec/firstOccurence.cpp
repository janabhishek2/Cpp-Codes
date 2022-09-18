#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int n,int idx,int x){

if(idx>=n){
       return -1;
}
else if(arr[idx]==x){
       return idx;
}
else return firstOccurence(arr,n,idx+1,x);

}
int main(){

int arr[]={2,3,9,81,7,6,8,4,8,1,3};
int size=sizeof(arr)/sizeof(int);
cout<<"First Occurence : "<< firstOccurence(arr,size,0,85);
return 0;
}

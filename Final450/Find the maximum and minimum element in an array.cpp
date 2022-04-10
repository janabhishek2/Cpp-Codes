#include<bits/stdc++.h>
using namespace std;

struct Pair{
       int max;
       int min;
};
int main(){

struct Pair p;
int arr[]={1,-1,-2};
int n=sizeof(arr)/sizeof(int);

if(n==0){
       return 0;
}
else if(n==1){
       p.max=p.min=arr[0];
}
else if(n>=2){
       if(arr[0]>arr[1]){
              p.max=arr[0];
              p.min=arr[1];
       }
       else{
               p.max=arr[1];
              p.min=arr[0];
       }
       for(int i=2;i<n;i++){
              if(p.max<arr[i]){
                     p.max=arr[i];
              }
              if(p.min>arr[i]){
                     p.min=arr[i];
              }
       }
}
cout<<"Max : "<<p.max<<" Min : "<<p.min<<endl;
return 0;
}

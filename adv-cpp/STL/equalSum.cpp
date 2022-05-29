#include<bits/stdc++.h>
using namespace std;
int t[1000][1000];
int main(){

int arr[]={1,3,5,7,9};
memset(t,-1,sizeof(t));

int sum=0;
for(int i=0;i<sizeof(arr)/sizeof(int);i++){
       sum+=arr[i];
}
cout<<sum<<endl;
return 0;
}

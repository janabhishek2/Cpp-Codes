#include<bits/stdc++.h>
using namespace std;


vector<int> getAllIndices(int arr[],int n, int dt, int idx){
       vector<int> v;
       if(idx==n) {
              return v;
       }
       else if(arr[idx]==dt){
              v.push_back(idx);
       }
       else{
          vector<int> v2 = getAllIndices(arr,n,dt,idx+1);
          v.insert(v.end(), v2.begin(),v2.end());
          return v;
       }
}

int main(){

int arr[] = {2,3,9,8,7,6,4,12,7,3,8};
int size = sizeof(arr)/sizeof(int);

vector<int> v;
v = getAllIndices(arr,size,3,0);
for(int i = 0;i<v.size();i++){
       cout<<v[i]<<" ";
}

return 0;
}

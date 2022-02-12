#include<iostream>
using namespace std;
int minRepeatingElementIndex(int arr[],int n){
const int N = 1e5+1;
int minIndex=INT_MAX;
int idx[N];
for(int i=0;i<N;i++){
    idx[i]=-1;
}
for(int i=0;i<n;i++){
    if(idx[arr[i]]==-1){
        idx[arr[i]]=i;
    }
    else{
        if(minIndex>idx[arr[i]]){
            minIndex=idx[arr[i]];
        }
    }
}
if(minIndex!=INT_MAX){
    return minIndex;
}

return -1;
}

int main(){

    int n;
    cout<<"Enter n: " ;
    cin>>n;
    int arr[n];
    cout<<"Enter arr : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=minRepeatingElementIndex(arr,n);
    cout<<ans;
return 0;
}

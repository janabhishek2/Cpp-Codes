#include<iostream>
using namespace std;
int numberOfRecordBreakingDays(int arr[],int n){
    int count=0;
    int maxVisitors=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>maxVisitors && (i==n-1 || (i<n-1 && arr[i]>arr[i+1]))){
            count++;
            maxVisitors=arr[i];
        }

    }
    return count;
}
int main(){
    int n;
    cout<<"Enter n " ;
    cin>>n;
    int arr[n];
    cout<<"Enter arr : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=numberOfRecordBreakingDays(arr,n);
    cout<<ans;
}

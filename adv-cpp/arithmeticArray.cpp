#include<iostream>
using namespace std;
int maxLengthOfArithmetciArray(int arr[],int n){

int maxLen=-1;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        int diff=a[j]-a[i];
        int len=0;
        for(int k=i+1;k<=j+1;k++){

        }
    }
}
}
int main(){

cout<<"Enter n : ";
int n;
cin>>n;
int arr[n];
cout<<"\nEnter Elements : ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=maxLengthOfArithmetciArray(arr,n);
cout<<ans;
}

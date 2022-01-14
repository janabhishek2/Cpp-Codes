#include<iostream>
using namespace std;
void printAllSubArrays(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<arr[i]
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
printAllSubArrays(arr,n);
}

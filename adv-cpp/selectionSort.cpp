
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){


for(int i=0;i<n-1;i++){
    int mini=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[mini]){
            mini=j;
        }
    }
    swap(arr[i],arr[mini]);
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
selectionSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
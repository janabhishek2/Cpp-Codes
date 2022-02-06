#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
            int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    return;
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
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

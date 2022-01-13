#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int element){

for(int i=0;i<n;i++){

    if(element==arr[i]){
        return true;
    }
}
return false;
}
int binarySearch(int arr[],int start,int end , int key){
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(start>end){
        return -1;
    }
    else if(arr[mid]<key){
        start=mid+1;
      return  binarySearch(arr,start,end,key);
    }
    else {
        end=mid-1;
       return  binarySearch(arr,start,end,key);
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
cout<<"\nEnter Element to search : ";
int x;
cin>>x;
int foundIndex=binarySearch(arr,0,n-1,x);
cout<<foundIndex;
}

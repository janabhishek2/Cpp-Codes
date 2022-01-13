#include<iostream>
using namespace std;
void initializeMax(int arr[],int mx[],int n){
mx[0]=arr[0];
for(int i=1;i<n;i++){
    mx[i]=max(arr[i],mx[i-1]);
}
return;
}
int getMaxAti(int index,int mx[]){
return mx[index];
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
int mx[n]={0};
initializeMax(arr,mx,n);
for(int i=0;i<n;i++){
    cout<<mx[i]<<" ";
}
}

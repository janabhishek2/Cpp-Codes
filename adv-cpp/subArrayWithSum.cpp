#include<iostream>
using namespace std;
void printSubArrayWithSum(int arr[],int n,int sum){
    int currSum=arr[0];
    bool found=false;
    int start=0;
    int end=1;
    while(end<n && start<end){
        if(currSum<sum){
            currSum+=arr[end];
            end++;
        }
        else if(currSum>sum){
            currSum-=arr[start];
            start++;
        }
        else{
            break;
        }
    }
    if(end>1){
        cout<<start<<" "<<end;
    }
    else
    cout<<"Not found";
}
int main(){
  int n;
    cout<<"Enter n: " ;
    cin>>n;
    int sum;
    cout<<"Enter sum : ";
    cin>>sum;
    int arr[n];
    cout<<"Enter arr : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printSubArrayWithSum(arr,n,sum);
}

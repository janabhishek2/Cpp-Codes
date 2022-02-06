#include<iostream>
using namespace std;
void printAllSubArrays(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }

    }
}
int maxSumOfSubArray(int arr[],int n){
    int maxSum=-1;

    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum+=arr[j];
            if(currSum>maxSum){
                maxSum=currSum;
            }

        }

    }
    return maxSum;

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
int mxSum=maxSumOfSubArray(arr,n);
cout<<mxSum;
}

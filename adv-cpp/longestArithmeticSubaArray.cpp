#include<iostream>
using namespace std;
int getMaxLenArithmeticSubArr(int arr[],int n){
    if(n<2) return -1;

    int maxLen=2;
    int currLen=2;
    int prevDiff=arr[1]-arr[0];

    for(int i=2;i<n;i++){
        int currDiff=arr[i]-arr[i-1];
        if(currDiff==prevDiff){
            currLen++;
             if(maxLen<currLen){
                maxLen=currLen;
            }
        }
        else{
            if(maxLen<currLen){
                maxLen=currLen;
            }
            prevDiff=arr[i]-arr[i-1];
            currLen=2;
        }
    }
    return maxLen;
}
int main(){
    cout<<"Enter n : ";

    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter arr : ";

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int maxLen=getMaxLenArithmeticSubArr(arr,n);
    cout<<maxLen;
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int solve(int* A, int n1, int B) {

    int sum=0;
    int start=0;
    int end=n1-1;
    while(B>0 && start<end){
        if(sum+A[start]>=sum+A[end]){
            sum+=A[start];
            start++;
            B--;
        }
        else{
            sum+=A[end];
            end--;
            B--;
        }
    }
    return sum;
}
int main(){

int arr[]={5, -2, 3 , 1, 2};
cout<<solve(arr,5,3);
return 0;
}

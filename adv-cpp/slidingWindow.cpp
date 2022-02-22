#include<bits/stdc++.h>
using namespace std;
void printSubArrSum(int arr[],int n,int sum){

int start=0;

int end;
bool found=false;
int currSum=arr[start];

for(end=1;end<=n && start<=end;){
       if(currSum<sum){
              currSum+=arr[end];
              end++;
       }
       else if(currSum>sum){
              currSum-=arr[start];
              start++;
       }
       else if(currSum==sum){
              found=true;
              break;
       }
}
if(found){
       cout<<start<<" "<<end<<endl;
}
else cout<<"-1";

}
int main(){

cout<<"Enter n : ";
int n;
cin>>n;
cout<<"Enter sum :" ;
int sum;
cin>>sum;

cout<<"Enter arr : ";
int arr[n];
for(int i=0;i<n;i++){
       cin>>arr[i];
}
printSubArrSum(arr,n,sum);
return 0;
}

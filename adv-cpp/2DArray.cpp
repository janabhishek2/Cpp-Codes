#include<iostream>
using namespace std;

void spiralTraversal(int arr[][],int n,int m){

int rowStart=0;
int rowEnd=n-1;
int colStart=0;
int colEnd=m-1;

while(rowStart<=rowEnd && colStart<=colEnd){
       for(int i=colStart;i<=colEnd;i++){
              cout<<arr[rowStart][i]<<" ";
              rowStart++;
       }
       for(int i=rowStart;i<=rowend;i++){
              cout<<arr[i][colEnd]<<" ";
              colEnd--;
       }
       for(int i=colEnd;i>=colStart;i--){
              cout<<arr[rowEnd][i]<<" ";
              rowEnd--;
       }
       for(int i=rowEnd;i>=rowStart;i--){
              cout<<arr[colStart][i]<<" ";
              colStart++;
       }
}


}
int main(){

int n,m;
cout<<"Enter n,m : ";
cin>>n>>m;
int arr[n][m];
cout<<"Enter 2d Array : ";
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
              cin>>arr[i][j];
       }
}
spiralTraversal(arr,n,m);

}

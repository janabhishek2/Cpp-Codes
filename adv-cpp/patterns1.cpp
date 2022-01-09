#include<iostream>
using namespace std;
void printRect(int rows,int cols){

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printHollowRectangle(int rows,int cols){

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==0 || i==rows-1 || j==0 || j==cols-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
void invertedHalfPyramid(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j>=i){
            cout<<"*";
        }
        else cout<<" ";
    }
    cout<<endl;
}
}
void invertedHalfPyramid2(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i+j<n){
            cout<<"*";
        }
        else cout<<" ";
    }
    cout<<endl;
}
}
void halfPyramidAfter180Deg(int n){
for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){
        if(i+j+1>=n){
            cout<<"*";
        }
        else cout<<" ";
    }
    cout<<endl;
}
}
void halfPyramidUsingNumbers(int n){
int cnt=1;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        if(j<=i){
            cout<<cnt<<" ";
            cnt++;
        }
        else cout<<" ";
    }
    cout<<endl;
}

}
void butterfly(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<2*n;j++){
        if((j>=0 && j<=i )|| (j>=2*n-i-1 && j<2*n)){
            cout<<"*";
        }
        else cout<<" ";
    }
    cout<<endl;
}
for(int i=n-1;i>=0;i--){
    for(int j=0;j<2*n;j++){
        if((j>=0 && j<=i )|| (j>=2*n-i-1 && j<2*n)){
            cout<<"*";
        }
        else cout<<" ";
    }
    cout<<endl;
}
}

int main(){

int rows,cols;
int n;
cout<<"Enter n : ";
cin>>n;
butterfly(n);
return 0;
}

#include<iostream>
using namespace std;
void invertedPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        for(int k=n-i;k<n;k++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void zeroOne(int n){

for(int i=0;i<n;i++){
        int cnt;
    if(i%2==0){
        cnt=1;
    }
    else cnt=0;
    for(int j=0;j<=i;j++){
        cout<<cnt;
        cnt=(cnt+1)%2;
    }
    for(int k=i+1;k<n;k++){
        cout<<" ";
    }
    cout<<endl;
}
}
void rhombusPattern(int n){

for(int i=0;i<n;i++){

    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(int k=0;k<n;k++){
        cout<<"*";
    }
    cout<<endl;
}
}
void numberPattern(int n){

for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    int print=1;
    int cnt=1;
    for(int k=n-i-1;k<n+i+1;k++){
        if(print==1){
            cout<<cnt;
            cnt++;
            print=(print+1)%2;
        }
        else{
            cout<<" ";
            print=(print+1)%2;
        }
    }
    for(int l=n+i+1;l<2*n;l++){
        cout<<" ";
    }
    cout<<endl;
}
}

int main(){
int n;
cout<<"Enter n : ";
cin>>n;
numberPattern(n);
return 0;
}

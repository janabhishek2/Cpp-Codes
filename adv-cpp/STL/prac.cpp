#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {

    int freq[100000+1]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(int j=0;j<m;j++){
        freq[b[j]]++;
    }
    int cnt=0;
    for(int i=0;i<=100000;i++){
        if(freq[i]>0){

            cnt++;
        }
    }
    return cnt;
}

int main(){

int a[1]={681};
int b[2]={485,555};
cout<<doUnion(a,1,b,2);
return 0;
}

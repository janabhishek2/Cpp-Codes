#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int wt[n];
    int val[n];
    int W;
    cout<<"Enter W : ";
    cin>>W;
    cout<<"Enter Wt arr : ";
    for(int i=0; i<n; i++)
    {
        cin>>wt[i];
    }
    cout<<"Enter val arr : ";
    for(int i=0; i<n; i++)
    {
        cin>>val[i];
    }



    int t[n+1][W+1];
    memset(t,-1,sizeof(t));

    for(int i=0;i<=n;i++){
       for(int j=0;j<=W;j++){
              if(i==0 || j==0){
                     t[i][j]=0;
              }
       }
    }
    for(int i=1;i<=n;i++){
       for(int j=1;j<=W;j++){
              if(wt[i-1]<=j){
                     t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
              }
              else {
                     t[i][j]=t[i-1][j];
              }
       }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
              cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



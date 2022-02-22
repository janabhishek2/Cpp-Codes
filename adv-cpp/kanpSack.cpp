#include <bits/stdc++.h>
using namespace std;

int t[1000][1000];
int maxValue(int wt[],int val[],int n,int totalWt)
{

    if(n==0 || totalWt==0)
    {
        return  0;
    }
    if(t[n][totalWt]!=-1)
    {
        return t[n][totalWt];
    }

     if(wt[n-1]>totalWt)
    {
        return t[n][totalWt]=maxValue(wt,val,n-1,totalWt);
    }
    else if(wt[n-1]<=totalWt) return t[n][totalWt]= max(maxValue(wt,val,n-1,totalWt),val[n-1]+maxValue(wt,val,n-1,totalWt-wt[n-1]));



}
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

    memset(t,-1,sizeof(t));

    int ans=maxValue(wt,val,n,W);
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<W+1; j++)
        {
            cout<<t[i][j]<<" ";

        }
        cout<<endl;
    }


    return 0;
}


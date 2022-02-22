#include <bits/stdc++.h>
using namespace std;
bool isSumPossible(int arr[],int n,int sum)
{
    if(sum==0 || n==0){
       if(sum==0){
              return true;
       }
       else return false;
    }
    if(arr[n-1]>sum){
       return isSumPossible(arr,n-1,sum);
    }
    else return isSumPossible(arr,n-1,sum-arr[n-1]) || isSumPossible(arr,n-1,sum);
}
int main()
{
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(isSumPossible(arr,n,m))
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int n)
{
    int first=arr[1];
    int last=arr[n-2];
    int l=arr[0];
    for(int i=1;i<n-1;i++)
    {
        int r=arr[i+1];
        int x=l*r;
        l=arr[i];
        arr[i]=x;
    }
    arr[0]=first*arr[0];
    arr[n-1]=last*arr[n-1];
}
int main()
{
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    func(arr,n);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}

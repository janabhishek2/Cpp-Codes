
#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int n)
{
    int x=0;
    int i=-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<x)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i=0;
    int j=n-1;

    while(i<=j)
    {
        if(i%2!=0)
        {
            i++;
        }
        if(j%2==0)
        {
            j--;
        }
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
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

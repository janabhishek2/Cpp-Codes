#include<iostream>
using namespace std;
int* func(int arr[],int n)
{
    int * x= new int[100];

    for(int i=0;i<n;i++)
    {
        x[arr[i]]=i;
    }
    return x;
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
    int *s;
    s=func(arr,n);
     for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
}

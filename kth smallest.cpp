#include<bits/stdc++.h>
using namespace std;
void minHeapify(int arr[],int n,int i)
{
    int l=2*i+1;
    int r=2*i+2;

    int smallest=i;
    if(l<n && arr[l]<arr[i])
    {
        smallest=l;
    }
    if(r<n && arr[r]<arr[smallest])
    {
        smallest=r;
    }
    if(smallest!=i)
    {
        swap(arr[i],arr[smallest]);
        minHeapify(arr,n,smallest);
    }
}
void buildMinHeap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        minHeapify(arr,n,i);
    }
}
int extractTop(int arr[],int &n)
{
    int ret=arr[0];
    arr[0]=arr[n-1];
    n--;
    minHeapify(arr,n,0);
    return ret;
}
int func(int arr[],int n,int k)
{
    buildMinHeap(arr,n);
    for(int i=0;i<k-1;i++)
    {
        int p=extractTop(arr,n);
    }
    int x=arr[0];
    return x;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int z=func(arr,n,k);
    cout<<z;

}

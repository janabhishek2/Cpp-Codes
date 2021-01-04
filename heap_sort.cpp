#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int l=2*i+1;
    int r=2*i+2;

    int largest=i;
    if(l<n && arr[l]>arr[i])
    {
        largest=l;
    }
    if(r<n && arr[r]>arr[largest])
    {
        largest=r;
    }

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
int getMax(int arr[],int &n)
{
    if(n<=0)
    {
        return -1;
    }
    int ret=arr[0];
    arr[0]=arr[n-1];
    n=n-1;
    heapify(arr,n,0);
    return ret;

}
void buildHeap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}
vector<int> heapSort(int arr[],int n)
{
    buildHeap(arr,n);
    vector <int> v;

    while(n!=0)
    {
        int x=getMax(arr,n);

        v.push_back(x);

    }
    return v;
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
    vector<int> v=heapSort(arr,n);
      for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}

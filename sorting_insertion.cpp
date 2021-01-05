#include<iostream>
using namespace std;
void func(int arr[],int n)
{
    int i=1;
    for(i;i<n;i++)
    {
        if(arr[i]<0)
        {
            int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        j++;
        arr[j]=temp;
        }

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

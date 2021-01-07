
#include<bits/stdc++.h>
using namespace std;
void func(int arr[],int n)
{
    int i=-1;
    int j;
    for(j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
            i++;
            swap(arr[i],arr[j]);
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
return 0;

}


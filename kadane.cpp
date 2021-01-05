#include<bits/stdc++.h>
using namespace std;
int temp[100]={0};
void kadane(int arr[],int n)
{

    temp[0]=arr[0];
    int max_curr;
    for(int i=1;i<n;i++)
    {
        max_curr=max(arr[i],temp[i-1]+arr[i]);
        temp[i]=max_curr;
    }

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
     kadane(arr,n);
     sort(temp,temp+n);

}

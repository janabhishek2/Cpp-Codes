#include<bits/stdc++.h>
using namespace std;
void func(int arr[],int n)
{
    srand(time(0));
    for(int i=n-1;i>=0;i--)
    {
        int j=rand()%(i+1);
        swap(arr[i],arr[j]);
    }
    return;
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


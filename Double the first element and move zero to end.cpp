#include<iostream>
using namespace std;
void func(int arr[],int n)
{
    /// for doubling the valid elements
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=0 && arr[i+1]!=0)
        {
            arr[i]*=2;
            arr[i+1]=0;
        }
    }
 for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    /// for moving 0 to end

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        arr[cnt]=arr[i];
          if(arr[i]!=0)
          {
              cnt++;
          }
    }
    for(int j=cnt;j<n;j++)
    {
        arr[j]=0;
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

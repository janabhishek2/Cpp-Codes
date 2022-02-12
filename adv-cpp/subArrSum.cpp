#include<iostream>
using namespace std;
void printSubArrayWithSum(int arr[],int n,int sum)
{

    int start=0;
    int en=0;
    int currSum=arr[start];
    bool found=false;
    while(start<=en and en<n)
    {
        if(currSum==sum)
        {
            found=true;
            break;
        }
        else if(currSum<sum)
        {
            en++;
            currSum+=arr[en];
        }
        else
        {
            currSum-=arr[start];
            start++;

        }
    }
    if(found){
        cout<<start<<" "<<en;
    }
    else cout<<"Not Found"<<endl;
}
int main()
{

    int n;
    cout<<"Enter n: " ;
    cin>>n;
    int sum;
    cout<<"Enter sum : ";
    cin>>sum;
    int arr[n];
    cout<<"Enter arr : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    printSubArrayWithSum(arr,n,sum);
}

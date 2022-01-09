
#include<iostream>
using namespace std;
int maxOfThree(int arr[])
{
    int x=arr[0];
    int y=arr[1];
    int z=arr[2];

    return x>=y && x>=z ? 0 : (y>=z && y>=x ? 1: (z>=x && z>=y?2:-1));
}
int main()
{
    cout<<"Enter 3 numbers : ";
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    int mxIndex=maxOfThree(arr);
    arr[mxIndex]*arr[mxIndex]==arr[(mxIndex+1)%3]*arr[(mxIndex+1)%3]+arr[(mxIndex+2)%3]*arr[(mxIndex+2)%3]?cout<<"Pythagorean triplet":cout<<"Not triplet";

}

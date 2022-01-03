#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n%10;
    if(temp>=5) n+=(10-temp);
    else n-=temp;
    cout<<n;
}

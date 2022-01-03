#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
long long performOperation(long long n);


long long performOperation(long long n)
{
    //code here.
    long long max=0;
    long long min=0;
    int i=0;
    long long x=n;
    while(x)
    {
        int temp=x%10;
        if(temp==5)
        {
            max=max+pow(10,i)*6;
        }
        else
        {
            max=max+pow(10,i)*temp;
        }
        x/=10;
        i++;
    }
   i=0;
   x=n;
    while(x)
    {
        int temp=x%10;
        if(temp==6)
        {
            min=min+pow(10,i)*5;
        }
        else
        {
            min=min+pow(10,i)*temp;
        }
        x/=10;
        i++;
    }

    long long int ans=max+min;
    return ans;
}

int main()
{
    unsigned long long int n;
    cin>>n;
    cout<<performOperation(n);
}

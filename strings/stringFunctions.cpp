#include<bits/stdc++.h>
using namespace std;
string concatNum(string str,int n)
{
    string s1;
    for(int i=0;i<n;i++)
    {
        s1+=str;
    }
    return s1;
}
int main()
{
    string str;
    cin>>str;
    cout<<concatNum(str,2);
    return 0;
}

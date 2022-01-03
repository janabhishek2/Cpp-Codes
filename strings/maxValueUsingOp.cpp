#include<bits/stdc++.h>
using namespace std;
int maxVal(string str)
{
string out;
for(int i=0;i<str.length();i++)
{
    if(str[i]=='0' || str[i]=='1')
    {
        out+=str[i];
        out+='+';
    }
    else
    {
        out+=str[i];
        out+='*';
    }
}
cout<<out;
return 0;
}
int main()
{
    cout<<maxVal("01231");
    return 0;
}

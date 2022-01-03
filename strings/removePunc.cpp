
#include<iostream>
using namespace std;
string removePunc(string str)
{
    string out;
    for(int i=0;i<str.length();i++)
    {
        if((str[i]>='a' && str[i]<'z')||(str[i]>'A' && str[i]<'Z'))
        {
            out+=str[i];
        }
    }
    return out;
}
int main()
{
    string str;
    cin>>str;
    cout<<removePunc(str);
}

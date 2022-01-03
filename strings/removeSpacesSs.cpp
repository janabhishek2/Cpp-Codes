
#include<bits/stdc++.h>
using namespace std;
void removeSpaces(string & str)
{
    int i=0;
    int j=-1;
    for(i;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
            j++;
            str[j]=str[i];
        }
    }
    j++;
    for(j;j<str.length();j++)
    {
        str[j]='\0';
    }
    return;
}
int main()
{
    string str;
    getline(cin,str);
    removeSpaces(str);
    cout<<str;
}

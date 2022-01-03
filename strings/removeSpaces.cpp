#include<bits/stdc++.h>
using namespace std;
string removeSpaces(string str)
{
    int i=0;
    int j=-1;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            j++;
            str[j]=str[i];
        }
        i++;
    }


    return str;
}
int main()
{
    string str;
    getline(cin,str);

    string out=removeSpaces(str);
    cout<<out;
}

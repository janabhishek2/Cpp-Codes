#include<bits/stdc++.h>
using namespace std;
int length(char *str)
{
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int main()
{
    string str;
    cin>>str;

    int freq[26]={};


    for(int i=0;i<str.length();i++)
    {
        freq[str[i]-('a')]++;
    }

    int first,second;
    first=0;
    second=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>freq[first] )
        {
            second=first;
            first=i;

        }
        else if(freq[i]>freq[second] && freq[i]!=freq[first])
        {
            second=i;
        }
    }
    cout<<first<<" "<<second;

}

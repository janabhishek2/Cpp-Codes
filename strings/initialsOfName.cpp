#include<iostream>
using namespace std;
string initials(string str)
{
     string out;

     for(int i=0;i<str.length();i++)
     {
        if(i==0 || str[i-1]==' ')
        {
            out+=str[i];
        }
     }
     for(int i=0;i<out.length();i++)
     {
         out[i]-=(97-65);
     }
     return out;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<initials(str);
}

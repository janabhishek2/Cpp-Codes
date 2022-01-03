#include<bits/stdc++.h>
using namespace std;
string integerWords(string str)
{
    stringstream ss;
    ss<<str;
    while(!ss.eof())
    {
        string out;
        ss>>out;
        cout<<out<<endl;
    }

}
int main()
{
stringstream ss;
ss<<"1 2 3 abc";
int p;
while(!ss.eof())
{
    string str;
    ss>>str;
    if(stringstream(str)>>p) cout<<str<<endl;
}
return 0;
}

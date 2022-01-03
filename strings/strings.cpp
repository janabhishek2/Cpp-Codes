#include<iostream>
using namespace std;
string rev(string str,int i,int j)
{
    if(i>=j)
    {
        return str;
    }
    else
    {
        swap(str[i],str[j]);

        i++;
        j--;
       return rev(str,i,j);
    }
}
int main()
{
    string str;
    cin>>str;
    string out=rev(str,0,str.length()-1);
    cout<<out;
}

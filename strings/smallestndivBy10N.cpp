#include<iostream>
using namespace std;
string getNumber(int n)
{
    int cpy=n;
    string str;
    while(n>=9)
    {
        str+='9';
        n=n-9;
    }
    int rem=n;
    string out="";
   if(rem>0)
   {
       out+=char(rem+'0');
   }
   out+=str;
   for(int i=0;i<cpy;i++)
   {
       out+='0';
   }
   return out;
}
int main()
{
    int n;
    cin>>n;
    cout<<getNumber(n);
    return 0;
}

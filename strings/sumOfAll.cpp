
#include<bits/stdc++.h>
using namespace std;
int sumOfAll(string str)
{
   int i=0;
   int j=-1;
   for(int i=0;i<str.length();i++)
   {
       if(str[i]>='0' && str[i]<='9')
       {

       }
       else
       {
           str[i]=' ';
       }
   }
  stringstream ss;
  ss<<str;
  int sum=0;
  while(!ss.eof())
  {
      int temp;
      ss>>temp;
      sum+=temp;
  }
  return sum;
}
int main()
{
    cout<<sumOfAll("51ab1c23");
    return 0;
}

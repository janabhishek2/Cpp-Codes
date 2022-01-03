#include<bits/stdc++.h>
using namespace std;
void reverseStr(string &str)
{
  int i=0;
  int j=str.length()-1;
  while(i<=j)
  {
      swap(str[i],str[j]);
      i++;
      j--;
  }
    return;
}

int main()
{
    string str;
    cin>>str;
    reverseStr(str);
    cout<<str;
}

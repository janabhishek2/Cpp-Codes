#include<bits/stdc++.h>
using namespace std;

void printSubstrings(string s){

for(int i = 0; i<s.length(); i++) {
       for(int j = i;j<s.length();j++){
              for(int k=i;k<=j;k++){
                     cout<<s[k];
              }
              cout<<endl;
       }
}
}

void printSubstringUsingFunc(string s){

for(int i=0;i<s.length();i++){
       for(int j=i;j<s.length();j++){
              cout<<s.substr(i,j)<<endl;
       }
}
}

int main(){

string s = "Hel:loff";
string subString = s.substr(0,3);
int pos = s.find(':');
printSubstringUsingFunc("abcd");
return 0;
}

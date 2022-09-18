#include<bits/stdc++.h>
using namespace std;

int toDigit(char ch){
return int(ch)-int('0');
}
int main(){
string s = "623";

cout<<toDigit(s[0]);
return 0;
}

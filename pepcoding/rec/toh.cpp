#include<bits/stdc++.h>
using namespace std;
void toh(int n,char a,char b,char c){
       if(n==0) return;
       else{
              toh(n-1,a,c,b);
              cout<<"Move "<<n<<" from "<<a<<" to "<<b<<endl;
              toh(n-1,c,b,a);
       }
}
int main(){
toh(3,'a','b','c');
return 0;
}

#include<bits/stdc++.h>
using namespace std;

template<class T>
void Swap(T &a,T &b){

T c=a;
a=b;
b=c;

}
int main(){

float a=10.5;
float b=20.7;
Swap(a,b);

cout<<a<<endl<<b<<endl;
return 0;
}

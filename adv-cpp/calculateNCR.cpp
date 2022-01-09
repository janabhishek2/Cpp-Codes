
#include<iostream>
using namespace std;
int factorial(int n){
int fact=1;
while(n>=1){
    fact=fact*n;
    n--;
}
return fact;
}
int main(){

int n,r;
cout<<"Enter n,r : ";
cin>>n>>r;
cout<<(factorial(n))/(factorial(r)*factorial(n-r));
}

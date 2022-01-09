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
cout<<"Enter n : ";
int n;
cin>>n;
cout<<factorial(n);
}

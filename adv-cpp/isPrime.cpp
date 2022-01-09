#include<iostream>
using namespace std;
bool isPrime(int n){

for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
}
return true;

}
int main(){

for(int i=1;i<=25;i++){
    isPrime(i)?cout<<i<<" Is Prime \n":cout<<i<<" Not Prime\n";
}
return 0;
}

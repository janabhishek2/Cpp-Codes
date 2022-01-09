#include<iostream>
using namespace std;
bool isArmStrong(int n){
    int comp=n;
    int sum=0;
    while(n){
        int temp=n%10;
        sum+=temp*temp*temp;
        n/=10;
    }
    return sum==comp;
}
int main(){

for(int i=0;i<=1000;i++){

    isArmStrong(i)?cout<<i<<endl:cout<<"";
}

}

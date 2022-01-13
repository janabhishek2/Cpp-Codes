
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int wrappers=n;
    int choc=n;
    while(wrappers>=3){
        choc=choc+(wrappers/3);
        wrappers=wrappers/3+wrappers%3;
    }
    cout<<choc;
}

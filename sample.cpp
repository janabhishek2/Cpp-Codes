#include<iostream>
using namespace std;
int g=32;
void changeA(int ** x)
{
    *x=&g;
    return;
}
int main()
{
    int a=10;
    int *ptr=&a;

    changeA(&ptr);
    cout<<*ptr;
}

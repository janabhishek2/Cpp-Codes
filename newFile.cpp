#include<iostream>
using namespace std;

namespace nm1{
void display()
{
    cout<<"Namespace 1"<<endl;
}
}

namespace nm2{
void display()
{
    cout<<"Namespace 2"<<endl;
}
}
class Base{

public:
    virtual void show(){
    cout<<"Base class"<<endl;
    }
};
class Derieved : public Base{

public:
    void show()
    {
        cout<<"Derieved class"<<endl;
    }

};
class Arithmetic{
private:
    int a;
    int b;
public:
    Arithmetic(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    friend int sum(Arithmetic);
};
int sum(Arithmetic ar)
{
    return ar.a+ar.b;
}
int main()
{
 Arithmetic ar(1,5);
 cout<<sum(ar);
}

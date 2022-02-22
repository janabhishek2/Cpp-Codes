#include<iostream>
using namespace std;

template <class T1,class T2>
class myClass{

public:
       T1 data1;
       T2 data2;
myClass(T1 d1,T2 d2){
       this->data1=d1;
       this->data2=d2;
}
void display(){
cout<<data1<<" "<<data2<<endl;
}

};

int main(){

myClass<char,int> m('s',2);
m.display();

}

#include<iostream>
using namespace std;
template <class T>

class vector{
public:
       T *arr;
       int size;
       vector(int m){
       size=m;
       arr=new T[size];
       }
       T dotProduct(vector &v){
              T dp=0;
              for(int i=0;i<size;i++){
                     dp+=v.arr[i]*this->arr[i];
              }
             return dp;
       }
};
int main(){
       vector<float> v1(3);
       v1.arr[0]=1.2;
       v1.arr[1]=2.3;
       v1.arr[2]=3.4;
       vector<float> v2(3);
       v2.arr[0]=1.7;
       v2.arr[1]=2.6;
       v2.arr[2]=3.9;

       cout<<v2.dotProduct(v1);

}

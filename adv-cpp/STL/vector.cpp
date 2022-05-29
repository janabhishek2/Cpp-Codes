#include<bits/stdc++.h>
using namespace std;
template <class T>
void display(vector<T> &v){

       for(int i=0;i<v.size();i++){
              cout<<v[i]<<endl;

       }

}
bool myComparator(pair<string,int> v1,pair<string,int> v2){

if(v1.second<v2.second){
       return false;
}
return true;

}
bool newComparator(int a,int b){
if(a<b){
       return false;
}
return true;
}
int main(){

int arr[5]={1,4,3,2,5};
vector<int> v(arr,arr+5);
sort(v.begin(),v.end(),newComparator);
for(auto ele:v){
       cout<<ele<<endl;
}
return 0;
}

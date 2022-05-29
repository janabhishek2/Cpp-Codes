#include<bits/stdc++.h>
using namespace std;

void display(list<int> &lst){
list<int>::iterator it;
for(it=lst.begin();it!=lst.end();it++){
       cout<<*it<<" ";
}
cout<<endl;
}
int main(){

list<int> lst;
lst.push_back(1);
lst.push_back(2);
lst.push_back(3);

lst.push_back(5);
lst.push_back(-1);

lst.sort();
list<int> lst1 ;
lst1.push_back(44);
lst1.push_back(20);
lst1.push_back(66);

lst.merge(lst1);

display(lst);
return 0;
}

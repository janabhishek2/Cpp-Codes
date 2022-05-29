#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
map<string,int> mp;

mp.insert({{"oneMore",3},{"twoMore",5}});
mp["Abhishek"]=55;
mp["Bhaya"]=45;
map<string,int>::iterator it;
it=mp.find("Abhishek");
if(it==mp.end()){
       cout<<"End reached"<<endl;
}
else cout<<(*it).second<<endl;
return 0;
for(it=mp.begin();it!=mp.end();it++){
       cout<<(*it).first<<" "<<(*it).second<<endl;
}
return 0;
}

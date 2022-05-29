#include<bits/stdc++.h>
using namespace std;

int main(){

map<string,int> freqNames;
int t;
cin>>t;
while(t--){
       int n;
       cin>>n;
       vector<pair<string,string>> fullNames;
       map<string,int> freqNames;
       for(int i=0;i<=n;i++){
              string firstName,lastName,fullName;
              getline(cin,fullName);
              stringstream ss(fullName);
              ss>>firstName;
              ss>>lastName;
              fullNames.push_back(make_pair(firstName,lastName));
              map<string,int> :: iterator it;
              it=freqNames.find(firstName);
              if(it!=freqNames.end()){
                     (*it).second++;
              }
              else{
                     freqNames.insert(pair<string,int>(firstName,1));
              }
       }
       vector<pair<string,string>> :: iterator it;
       for(it=fullNames.begin();it!=fullNames.end();it++){
              map<string,int>::iterator itMp;
              itMp=freqNames.find((*it).first);
              if((*itMp).second!=1){
                     cout<<(*it).first<<" "<<(*it).second<<endl;
              }
              else cout<<(*it).first<<endl;
       }
}
return 0;
}

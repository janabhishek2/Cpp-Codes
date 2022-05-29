#include<bits/stdc++.h>
using namespace std;

int numberOfPaths(int n,int qb[])
{
  if(n==0){
       return 1;
  }
  else if(n<0)
  {
  return 0;
  }
  if(qb[n]!=-1){
       return qb[n];
  }
  cout<<"Hello "<<n<<endl;
  int nm1=numberOfPaths(n-1,qb);
  int nm2=numberOfPaths(n-2,qb);
  int nm3=numberOfPaths(n-3,qb);
  return qb[n]=nm1+nm2+nm3;
}
int countPaths(int n){
    int qb[n+1];
    qb[0]=1;
    for(int i=1;i<=n;i++){
       qb[i]=qb[i-1]+(i-2<0?0:qb[i-2])+(i-3<0?0:qb[i-3]);
    }
    return qb[n];
}
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
int qb[n+1];
for(int i=0;i<=n;i++){
       qb[i]=-1;
}
cout<<countPaths(n);
return 0;
}

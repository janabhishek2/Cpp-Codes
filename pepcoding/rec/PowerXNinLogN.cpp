#include<bits/stdc++.h>
using namespace std;
static int cnt=0;
int Power(int x,int n){
       cnt++;
       if(n==0){
              return 1;
       }
       if(n%2==0){
              return Power(x,n/2)*Power(x,n/2);
       }
       else return x*Power(x,n/2)*Power(x,n/2);
}
int main(){
 cout<<"Enter x and n : ";
    int x,n;
    cin>>x>>n;

    int ans=Power(x,n);
    cout<<ans;
    cout<<endl<<cnt;
return 0;
}

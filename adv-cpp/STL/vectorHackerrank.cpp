#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<long long int> v;
    long long int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.begin()+n);
    vector<long long int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
       cout<<*it<<" ";
    }
    return 0;
}
16289

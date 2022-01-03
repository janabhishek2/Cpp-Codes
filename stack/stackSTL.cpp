#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stk;
    stk.push(20);
    stk.push(25);
    stk.push(30);

    while(!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }
}

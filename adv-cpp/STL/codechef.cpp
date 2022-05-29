#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int n;
            cin>>n;
            v.push_back(n);
        }
        else
        {
            if(v.empty())
            {
                cout<<"kuchbhi?"<<endl;
            }
            else
            {
                cout<<v.back()<<endl;
                v.pop_back();
            }

        }
    }
    return 0;
}

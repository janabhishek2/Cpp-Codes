#include<bits/stdc++.h>
using namespace std;
int getMinSumSquares(string str,int k)
{
    int arr[26]={};
    for(int i=0;i<str.length();i++)
    {
        arr[str[i]-'a']++;
    }
    sort(arr,arr+26,greater<int>());
    int x=0;
    while(k!=0)
    {
        if(arr[x]>=k)
        {
            arr[x]=arr[x]-k;
            break;
        }
        else
        {
            k=k-arr[x];
            arr[x]=0;
            x++;
        }
    }
    int minSum=0;
    for(int i=0;i<26;i++)
    {
        minSum+=arr[i]*arr[i];
    }

    return minSum;
}
int main()
{
    string str;
    int k;
    cin>>str>>k;
    cout<<getMinSumSquares(str,k);
    return 0;
}

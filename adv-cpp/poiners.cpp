#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'saveThePrisoner' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 *  3. INTEGER s
 */

int saveThePrisoner(int n, int m, int s) {
    if(m>=n){m=m%n;}
    if(m-1<0){
       m=n;
    }
    return s+(m-1);
}

int main()
{
       cout<<saveThePrisoner(5,5 ,1);
}

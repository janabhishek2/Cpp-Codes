
#include<iostream>
#include<string>

using namespace std;
string reverseString1(int n){
 string str=to_string(n);
    int start=0;
    int end=str.length()-1;
    while(start<=end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;
}
int reverseNumber(int n){

    int sum=0;
    while(n){
        int temp=n%10;
        sum=sum*10+temp;
        n/=10;
    }
    return sum;
}
int main(){

    int n;
    cin>>n;
    cout<<reverseNumber(n);

}

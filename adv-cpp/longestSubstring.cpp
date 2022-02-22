#include<bits/stdc++.h>
using namespace std;
  int countValidWords(string sentence) {

        stringstream ss(sentence);
        string word;
        string arr[1000];
        int count=0;
        while(ss >> word){
            arr[count]=word;
            count++;
        }
        int valid=0;
        for(int i=0;i<count;i++){
            string s=arr[i];
            bool validString=true;
            for(int j=0;j<s.length();j++){
                if(int(s[j])<97 || int(s[j])>122){
                    validString=false;
                    break;
                }
            }
            if(validString){
                valid++;
            }
        }
        return valid;

    }
int main()
{
 string str="he bought 2 pencils, 3 erasers, and 1  pencil-sharpener.";
 stringstream ss(str);
 string word;
 string arr[100];
 int count=0;
 while(ss >> word){
       arr[count]=word;
       count++;
 }
 int ans=countValidWords(str);
}

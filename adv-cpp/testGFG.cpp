#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        vector<int> :: iterator it;
        int unq=0;
        int arr[201]={0};
        for(it=nums.begin();it!=nums.end();it++){

           if(arr[*it+100]==0){
               unq++;
               arr[*it+100]++;
           }

        }
        nums.clear();

        for(int i=0;i<201;i++){

            if(arr[i]==1){
                nums.push_back(i-100);
            }
        }

        return nums.size();
    }
int main(){

vector<int> nums;
nums.push_back(1);
nums.push_back(2);
nums.push_back(2);
nums.push_back(3);
nums.push_back(4);
nums.push_back(4);


vector<int>::iterator it;

int ans=removeDuplicates(nums);
cout<<ans;
}

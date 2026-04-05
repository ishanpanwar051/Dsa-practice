#include<iostream>
#include<vector>
using namespace std;

vector<int>movezeroes(vector<int>&nums){
    int n =nums.size();
    int slow =0;
   
   int  fast=0;
   while(fast<n){
    if(nums[fast]!=0){
        swap(nums[slow],nums[fast]);

        slow++;

   }
   fast++;


   }
   return nums;

}

int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>res=movezeroes(v);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
}
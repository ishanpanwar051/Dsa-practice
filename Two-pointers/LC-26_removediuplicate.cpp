#include<iostream>
#include<vector>
using namespace std;

int removeduplicate(vector<int>&nums){
    int n =nums.size();
    int slow =0;
    int fast =slow+1;

    

    while(fast<n){
            if(nums[slow]!=nums[fast]){slow++;
           
            nums[slow] =nums[fast];
        }fast++;


    }
    return slow +1;

}


   
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res =removeduplicate(v);
   for(int i=0;i<res;i++){
    cout<<v[i];
   }

}
#include<iostream>
#include<vector>
using namespace std;

vector<int>twosum(vector<int>&nums,int target){
    int n =nums.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
             
            }
            
        }

    }
    return ans;

    

}

int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
}

int target ;
cout<<"enter target ";
cin>>target ;

vector<int> result = twosum(v,target);
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";

}
}
#include<iostream>
#include<vector>
using namespace std;

vector<int>firstnegative(vector<int>&nums,int k){
    int n =nums.size();
    vector<int>result;

    int i=0;
    int j=0;
    int p=-1;
    while(j<n){
       if(j-i+1<k)j++;
       else if (j-i+1==k){
        bool found =false;
        for(int p = i;p<=j;p++){
            if(nums[p]<0){
                result.push_back(nums[p]);
                found =true;
                break;
            }
        }
        if(!found){
            result.push_back(0);
        }
        i++;
        j++;
       }
      
    }
     return result;

}

int main(){
    vector<int>nums ={12, -1, -7, 8, -15, 30, 16, 28};
    int k =3;
    vector<int>ans =firstnegative(nums,k);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i];
    }
}
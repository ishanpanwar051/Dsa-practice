#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n =nums.size();
        int count =0;
        int  i=0;
        int maxlen =0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] == 0){
                count++;
            }
            while(count>1){
                if(nums[i]==0){
                    count--;
                }
                i++;
            }
            maxlen =max(maxlen,j-i);
        }
        return maxlen;

    }
};

int main(){

    vector<int>nums={1,1,0,1};
    Solution obj;
   cout<< obj.longestSubarray(nums);
    
}
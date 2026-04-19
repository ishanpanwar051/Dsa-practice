#include<iostream>
#include<vector>
#include<climits>

using namespace std;


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n =nums.size();
        int i=0;
        int j=0;
        int count =1;
        int minlen =INT_MAX;
        int len ;

       int sum=0;

        while(j<n){
            sum+=nums[j];

           while(sum>=target){
            
            len =j-i+1;
            minlen =min(minlen,len);
            sum-=nums[i];
            i++;
           }
           j++;
           
    }
    if(minlen == INT_MAX)return 0;
    return minlen;
    }

};

int main(){
    int n;
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    int target;
    cin>>target;

    Solution obj;
    int ans =obj.minSubArrayLen(target,nums);
    cout<<ans<<endl;


}
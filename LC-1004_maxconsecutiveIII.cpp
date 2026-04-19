#include<iostream>
#include<vector>
#include<climits>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int  n= nums.size();
       int flips = 0;
       int  i=0;
       int j =0;
       int maxlen =INT_MIN;
       int len =INT_MIN;

       while(j<n)
{
if(nums[j]==1) j++;
else{
    if(flips<k){
        flips++;
        j++;
    }
    else{
        len =j-i;
        maxlen =max(maxlen,len);

        while(nums[i]==1)i++;
        i++;
        j++;


    }
}
}
len =j-i;
maxlen =max(maxlen,len);
return maxlen;

    }
};

int main(){
int k =1;
    vector<int>nums={1,1,0,0,1,1};
    Solution obj;
    cout<<obj.longestOnes(nums,k);

}
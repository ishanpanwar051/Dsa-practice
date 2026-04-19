#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;  // ✅ k=0 aur k=1 dono handle

        int n = nums.size();
        int left = 0;
        int count = 0;
        int pro = 1;

        for (int right = 0; right < n; right++) {
            pro *= nums[right];

            while (pro >= k) {
                pro /= nums[left];
                left++;
            }

            count += right - left + 1;
        }

        return count;
    }
};

int main(){
    vector<int>nums ={10,5,2,6};
    int k =100;
    Solution obj;
    cout<<obj.numSubarrayProductLessThanK(nums,k);
}
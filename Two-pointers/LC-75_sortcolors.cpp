#include<iostream>
#include<vector>
#include<string>
using namespace std;


void sortColors(vector<int>& nums) {
        int n =nums.size();
        int low =0;
        int high =nums.size()-1;
        int mid =0;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;

            }
            else if(nums[mid]==1){
                mid++;
            }
            else {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }


    int main(){
        int n;
        cout<<"enter the size";
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
   sortColors(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

    
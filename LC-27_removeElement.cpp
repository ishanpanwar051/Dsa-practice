#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>&nums,int val){
    int n=nums.size();
    int k =0;
    for(int i=0;i<n;i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;

        }
    }
    return k;
}

int main(){
    
    vector<int>v ={1,2,3,4,3,3};
    int val =3;
    int q  =removeElement(v,val);
    for(int i=0;i<q;i++){
        cout<<v[i];
    }
}
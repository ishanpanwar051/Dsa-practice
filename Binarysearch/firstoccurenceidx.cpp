#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,2,2,2,3,3,4,5,5,5,5,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    int x =5;
    int lo =0;
    int hi=n-1;
    int ans =-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                ans =mid;
                hi =mid -1;

                break;
            }
            
           
            else if(arr[mid]<x) lo =mid+1;
            else hi =mid-1;
        }
    }
cout<<ans;
}
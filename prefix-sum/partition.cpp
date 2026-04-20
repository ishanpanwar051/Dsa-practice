#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5,6,7,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    //find the prefix sum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    bool flag=true;
    for(int i=1;i<n;i++){

        if(2*arr[i]==arr[n-1]){
            flag=true;
            break;
        }

    }
    if(flag)cout<<"yes it can be partion";
    else cout<<"no it cannot be partion";
}
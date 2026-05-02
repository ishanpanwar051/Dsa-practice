#include<iostream>
using namespace std;

int main(){
    int arr[] ={4,1,6,7,3,2};
    int n =sizeof(arr)/sizeof(arr[0]);

    // Print original array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int i=0;
    while(i<n){
        int correctidx = arr[i] - 1;

        if(arr[i] != arr[correctidx]){
            swap(arr[i], arr[correctidx]);
        } else {
            i++;
        }
    }

    // Print sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
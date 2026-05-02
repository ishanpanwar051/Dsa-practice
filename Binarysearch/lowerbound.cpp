#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr ={1,2,4,5,9,15,18,21,24};
    int n =arr.size();
    int x =20;
int lo =0;
int hi =n-1;
bool flag =false;
while(lo<=hi)
{int mid =lo+(hi-lo)/2;

    if(arr[mid]==x){
    flag=true ;
    cout<<arr[mid-1];
    break;

    }

    else if(arr[mid]<x)lo=mid+1;
    else if(arr[mid]>x)hi=mid-1;


}

if (flag ==false)cout<< arr[hi];

}
#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool ispalidrome(string s){
    int n =s.length();
    int left =0;
    int right =n-1;

    while(left<right){
        while(left<right && !isalnum(s[left])) left++;
        while(left<right && !isalnum(s[right]))right--;

if(tolower(s[left]!=s[right]))return false;

left++;
right--;

    }
    return true;
}

int main(){
   
    string s;
    cin>>s;

    cout<<ispalidrome(s);
}
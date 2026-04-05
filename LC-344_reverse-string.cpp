#include<iostream>
#include<vector>
#include<string>
using namespace std;

    void reverseString(vector<char>& s) {
      int n= s.size();
      int i =0;
      int j =n-1;
      while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
      }  

    }

    int main(){
        string str;
        getline(cin,str);

      
        vector<char> s(str.begin(), str.end());
        reverseString(s);
        for(auto x:s){
            cout<<x;
        }

    }

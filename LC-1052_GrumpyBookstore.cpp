#include<iostream>
#include<vector>
using namespace std;



int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        
        int base = 0;
        

        for(int i = 0; i < n; i++) {
            if(grumpy[i] == 0) {
                base += customers[i];
            }
        }
        
       
        int extra = 0;
        
       
        for(int i = 0; i < minutes; i++) {
            if(grumpy[i] == 1) {
                extra += customers[i];
            }
        }
        
        int maxExtra = extra;
        
       
        for(int i = minutes; i < n; i++) {
            if(grumpy[i] == 1) {
                extra += customers[i];
            }
            
            if(grumpy[i - minutes] == 1) {
                extra -= customers[i - minutes];
            }
            
            maxExtra = max(maxExtra, extra);
        }
        
        return base + maxExtra;
    }

    int  main(){

        int n;
        cin>>n;

    vector<int> customers(n), grumpy(n);

    
    for(int i = 0; i < n; i++) {
        cin >> customers[i];
    }

  
    for(int i = 0; i < n; i++) {
        cin >> grumpy[i];
    }

    int minutes;
    cin >> minutes;

    int result = maxSatisfied(customers, grumpy, minutes);

    cout << result << endl;
        
    }
#include <bits/stdc++.h>
using namespace std;

int main (void){
    vector<int> v;
    int sum=0;
    for(int i=0; i<9; i++){
        int t;
        cin >> t;
        v.push_back(t);
        sum+=t;
    }
    sum -=100;
    sort(v.begin(), v.end()); //7 8 10 13 15 19 20 23 25
    int total=0;
    
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            total = v[i]+v[j];
            if(sum == total) {
                v[i]=0; 
                v[j]=0;
                break;
            }
        }
        if(sum == total) { 
            break;
        }
        
        
    }
    
    for(auto iter:v){
        if(iter !=0) cout << iter<<"\n";
    }
    
    return 0;
}


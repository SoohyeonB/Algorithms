#include <bits/stdc++.h>
using namespace std;


int main (void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for(int i =0; i<n; i++){ // i=4
        for(int j=0; j<n-i; j++){  //0-1
            cout << "*"; //0 1 2 3
        }
        
        cout << "\n";
    }
    
}




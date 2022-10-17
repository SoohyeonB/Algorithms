#include <bits/stdc++.h>
using namespace std;


int main (void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for(int i =1; i<=n; i++){ // i=1
        for(int j=0; j<n-i; j++){  //j = 4
            cout << " "; //0 1 2 3
        }
        for(int j=n-i; j<n; j++){ //j = 4, 5
            cout << "*";
        }
        
        cout << "\n";
    }
    
}




#include <bits/stdc++.h>
using namespace std;


int main (void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int blank;
    
    for(int i=n; i>0; i--){
        for(int j=1; j<=n-i; j++) cout << " ";
        for(int j=1; j<=2*i-1; j++) cout <<"*";
        cout << "\n";
        
    }
    
}

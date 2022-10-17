#include <bits/stdc++.h>
using namespace std;


int main (void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int blank = (2*n-1)/2;
    
    for(int i=1; i<=n; i++, blank--){ //1 3 5 9 2n-1
        for(int j=0; j<blank; j++) cout << " ";
        for(int j=0; j<2*i-1; j++) cout << "*";
        cout << "\n";
    }
    
    for(int i=n-1; i>0; i--){
        for(int j=1; j<=n-i; j++) cout << " ";
        for(int j=1; j<=2*i-1; j++) cout <<"*";
        cout << "\n";
        
    }
    
}

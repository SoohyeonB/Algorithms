#include <bits/stdc++.h>
using namespace std;


int main (void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for(int i =n; i>0; i--){ // i=5 4 3 2 1
        for(int j=0; j<n-i; j++) cout <<" "; //0 1 2 3 4
        for(int j=0; j<i; j++) cout << "*"; //
        cout << "\n";
    }
    
}




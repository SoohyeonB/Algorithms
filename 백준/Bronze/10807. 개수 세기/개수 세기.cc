#include <bits/stdc++.h>
using namespace std;
const int SIZE=201;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, t, v;
    cin >>n;
    
    int occurs[SIZE]={};
    
    for(int i=0; i<n; i++){
        cin >>t;
        occurs[t+100]++;
    }
    
    cin >>v;
    cout << occurs[v+100];
    
    
    
    return 0;
}
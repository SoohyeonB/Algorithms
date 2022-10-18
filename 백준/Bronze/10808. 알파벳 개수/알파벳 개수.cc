#include <bits/stdc++.h>
using namespace std;
const int SIZE=26;

int main (void){
    string S;
    cin >> S;
    //26개
    
    vector<int> V(SIZE);
    
    for(auto t:S){
        V[t-'a']++;
    }
    
    for(int i=0; i<26; i++){
        cout << V[i]<<" ";
    }
    
    return 0;
}




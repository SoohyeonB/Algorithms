#include <bits/stdc++.h>
using namespace std;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2;
    int a1[26]={};
    int a2[26]={};
    
    cin >> s1 >> s2;
    
    for(auto i:s1) a1[i-'a']++;
    for(auto i:s2) a2[i-'a']++;
    
    int result=0;
    for(int i=0; i<26; i++){
        result += abs(a1[i]-a2[i]);
    }
    
    cout << result;
    return 0;
}

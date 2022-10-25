#include <bits/stdc++.h>
using namespace std;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
        
    int n;
    string x, y, answer;
    
    cin >> n;
    
    while(n--){
        bool flag =true;
        int a[26]={0,}; //알파벳 26개
        cin >> x >>y;
        
        for(auto i:x){
            a[i-'a']++;
        }
        
        for(auto i:y){
            a[i-'a']--;
        }
        
        for(int i:a){
            if(i!=0) flag = false;
        }
        
        if(flag) answer+="Possible\n";
        else answer +="Impossible\n";
    }
    
    cout << answer;
    
    return 0;
}

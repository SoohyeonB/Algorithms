#include <bits/stdc++.h>
using namespace std;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
     
    
    
    while(T--){
        string ans="YES";
        stack<int> s;
        string str;
        cin >> str;
        
        //좋은 단어인지 판단
        for(auto c:str){
            if(c =='(') s.push(c);
            else{ //c==')'
                if(!s.empty() && s.top()=='(') s.pop();
                else ans ="NO";
            }
        }
        
        if(!s.empty()) ans = "NO";
        cout << ans<<"\n";
    }
    
    return 0;
}


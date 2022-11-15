#include <bits/stdc++.h>
using namespace std;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
     
    int ans=0;
    
    while(N--){
        stack<int> s;
        string str;//abab
        cin >> str;
        
        //좋은 단어인지 판단
        for(auto c:str){
            if(c=='A'){
                if(!s.empty() && s.top()=='A') s.pop();
                else s.push(c);
            }
            else{ //B
                if(!s.empty() && s.top()=='B') s.pop();
                else s.push(c);
            }
        }
        if(s.empty()) ans++;
    }
    cout << ans;
    
    return 0;
}


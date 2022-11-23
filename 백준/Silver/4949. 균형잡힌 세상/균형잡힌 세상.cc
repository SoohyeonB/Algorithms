#include <bits/stdc++.h>
using namespace std;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    string ans;
    
    while(1){
        //문장 입력받기
        getline(cin, str);
        ans="yes";
        
        if(str == ".") break;
        stack<char> s;
        
        //문장 읽기
        for(auto c:str){ //aaa[(a]
            if(c =='['|| c=='(') s.push(c);
            else if(c==')'){
                if(!s.empty() && s.top() =='(') s.pop();
                else {ans = "no"; break;}
            }
            else if(c==']'){
                if(!s.empty() && s.top() =='[') s.pop();
                else {ans = "no"; break;}
            }
            
        }
        //s가 비어있지 않은 경우를 생각해주지않음
        if(!s.empty()) ans = "no";
        cout << ans<<'\n';
        
    }

    
    return 0;
}

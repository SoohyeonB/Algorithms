#include <bits/stdc++.h>
using namespace std;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin >>str;
    stack<char> s;
    int ans =0;
    int isOpen=0;
    
    for(auto c:str){
        if(c =='(') {
            isOpen=1;
            s.push(c);
        }
        else if(c==')'&& s.top()=='('){
            s.pop();
            //laser이면 stack에 있는 열린 막대 개수 다 더하기
            if(isOpen) {
                ans+=s.size();
            }
            
            //막대의 끝이면
            else  ans++;
            isOpen =0;
        }
    }
    cout << ans;
    
    return 0;
}


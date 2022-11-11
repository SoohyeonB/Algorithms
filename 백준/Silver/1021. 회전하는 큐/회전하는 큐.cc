#include <bits/stdc++.h>
using namespace std;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
  
    int n;
    int m;
    cin >>n; //1
    cin >> m; //1
    int ans=0;
    
    deque<int> D;
    
    for(int i=1; i<=n; i++) D.push_back(i); //1
    
    while(m--){
        int num;
        cin >> num;
        
        int idx = find(D.begin(), D.end(), num) - D.begin(); //idx: num이 있는 위치
    
        while(D.front() != num){ //front에서만 뽑을 수 있음!!
            //왼쪽에 더 가까우면
            if(idx < D.size()-idx){ //2번 < 10-2 = 8
                D.push_back(D.front()); 
                D.pop_front();
            }
            //오른쪽에 더 가깝거나 중간이면
            else{
                D.push_front(D.back());
                D.pop_back();
            }
            ans++;
        }
        D.pop_front();
    }
    
    cout << ans;
    
    
    
    
    return 0;
}



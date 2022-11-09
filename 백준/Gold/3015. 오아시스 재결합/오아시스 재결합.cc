#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  stack<pair<int, int>> S; //키, 쌍의 개수
  cin >> n; 
  long long ans=0;
  
  while(n--){
      int h;
      cin >> h;
      int cnt=1;
      
      while(!S.empty() && S.top().first <=h){ //둘다 만족
          ans += S.top().second;
          if(S.top().first ==h) cnt += S.top().second;
          S.pop();
      }
      
      if(!S.empty()) ans++;
      S.push({h, cnt});
  }
  cout<< ans;

  
}
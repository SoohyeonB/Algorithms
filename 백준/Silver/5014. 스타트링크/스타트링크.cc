#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int F, S, G, U, D;
int dist[1000001];

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> F>>S>>G>>U>>D;
  
  //10층짜리 건물 /S층에서 G층까지 가야함
  //위로 2층, 아래로 1층
  int dx[2] ={U, D*-1};
  
  //출발점 저장
  queue<int> Q;
  dist[S]=1;
  Q.push(S);
  
  if(S==G) {cout << 0; return 0;}
  
  while(!Q.empty()){
      int cur = Q.front();
      Q.pop();
      
      for(int dir=0; dir<2; dir++){
          int next = cur+dx[dir];
          
          //범위 확인
          if(next<=0 || next>F) continue;
          //방문여부 확인
          if(dist[next]!=0) continue;
          
          dist[next] = dist[cur]+1;
          Q.push(next);
      }
  }
  
  if(dist[G]==0) cout <<"use the stairs";
  else cout << dist[G]-1;
  
}
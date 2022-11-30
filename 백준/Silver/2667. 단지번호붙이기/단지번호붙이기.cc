#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[26][26];
int isVisit[26][26];

int dx[4] = {0,0,1,-1};
int dy[4] ={1,-1,0,0};

int N;
vector<int> cpx;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  
  string lines;
  
  for(int i=0; i<N; i++){
      cin >> lines;
      for(int j=0; j<N; j++){
          board[i][j]= lines[j]-'0';
      }
  }
 
  
  for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
          if(isVisit[i][j]!=0 || board[i][j]==0) continue;
          
          queue<pair<int, int>> Q;
          Q.push({i, j});
          isVisit[i][j]=1;
          
          int houses=1;
          while(!Q.empty()){
              auto cur = Q.front();
              Q.pop();
              
              //상하좌우 확인
              for(int k=0; k<4; k++){
                  int nx = cur.X+dx[k];
                  int ny = cur.Y + dy[k];
                  
                  if(nx>=N||nx<0||ny<0||ny>=N) continue;
                  //다음 노드를 방문했거나 현재와 다른 단지인 경우
                  if(isVisit[nx][ny]==1 || board[nx][ny]==0) continue;
                  
                  isVisit[nx][ny]=1;
                  Q.push({nx, ny});
                  houses++;
              }
            }
            cpx.push_back(houses);
      }
  }
  
  sort(cpx.begin(), cpx.end());
  cout << cpx.size()<<'\n';
  for(auto c:cpx){
      cout << c <<'\n';
  }
  
}


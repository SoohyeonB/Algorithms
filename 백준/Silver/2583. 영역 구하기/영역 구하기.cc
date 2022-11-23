#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dist[103][103];
int board[103][103];
int x[4]={1,0,-1,0};
int y[4]={0,1,0,-1};

int m,n,k;
int dx, dy, ux, uy;


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> m>>n>>k;
  //보드에 직사각형 그리기
  while(k--){
      cin >> dx>>dy>>ux>>uy; //0 2 4 4
      for(int t=dy; t<uy; t++){//0 1 2 3
          for(int tt=dx; tt<ux; tt++){ //
              board[t][tt]=1;
          }
      }
      
  }
  
  int area=0;
  vector <int> scales;
  
  for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
          //직사각형이거나 방문한 경우 pass
          if(board[i][j]==1||dist[i][j] ==1) continue;
          area++;
          
          queue <pair<int, int >> Q;
          dist[i][j]=1;
          Q.push({i, j});
          
          int scale=1;
          while(!Q.empty()){
              
              pair<int, int> current = Q.front();
              Q.pop();
              
            //2. 큐에서 원소를 꺼내어 그 칸에 상하좌우로 인접한 칸에 대해 3번을 진행
             for(int dir =0; dir<4; dir++){
                //nx: 다음 x, ny: 다음 y
                int nx = current.X + x[dir];
                int ny = current.Y + y[dir];
                
                //범위 밖으로 벗어나지 않게 if문 걸어주기
                if(nx <0 ||nx>=m || ny<0|| ny>=n) continue;
                //방문했거나 직사각형인 경우
                if(dist[nx][ny]==1|| board[nx][ny]==1)continue;
                
                dist[nx][ny] = 1; //다음칸 방문 명시
                Q.push({nx, ny}); //큐에 push
                scale++;
            }
          }
          scales.push_back(scale);
          
      }
  }
  sort(scales.begin(), scales.end());
  
  cout << area<<'\n';
  for(int i:scales)
    cout << i<<' ';
}
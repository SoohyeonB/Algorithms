#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1002][1002]; //그림
int dist[1002][1002]; //dist : 이전노드 +1 = 걸리는 시간을 뜻함

//아래 오른쪽 위 왼쪽
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> m >>n;
    queue<pair<int, int>> Q;
    
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            //익은 토마토는 큐에 push -> 방문 예정
            if(board[i][j]==1) Q.push({i, j});
            //익지 않은 토마토는 -1
            if(board[i][j]==0) dist[i][j]=-1;
        }
    }
    
    //큐를 돌면서 방문하기
    while(!Q.empty()){
        //큐에서 하나씩 뽑아서 상하좌우로 인접한 칸에 익지 않은 토마토를 익히기
        pair<int, int> cur = Q.front();
        Q.pop();
        
        for(int dir =0; dir<4; dir++){
            //다음 인덱스 계산
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            //해당 인덱스가 범위 내에 있는지 확인
            if(nx <0 || nx>=n || ny>=m || ny<0) continue;
            
            //방문한 경우는 pass
            if(dist[nx][ny]>=0) continue;
            
            //다음 노드 dist 갱신
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            Q.push({nx, ny}); //다음으로 방문할 곳 저장
        }
    }
    
    int ans=0; //모든 토마토가 익어있으면 0, 모두 익지 못하는 상황이면 -1 출력
    
    //박스 상태 확인하기
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            //익지 않은 토마토가 존재하면
            if(dist[i][j] == -1){
                cout <<-1; return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    
    
    cout <<ans;
    
}
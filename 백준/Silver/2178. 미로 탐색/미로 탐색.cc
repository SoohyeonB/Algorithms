#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[102]; //미로
int dist[102][102]; //거리 저장

//아래 오른쪽 위 왼쪽
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n>>m;
    
    for(int i=0; i<n; i++)
        cin >> board[i];
   
   //1. 시작하는 칸을 큐에 넣고 방문했다는 표시를 남김 = 거리를 남김
    queue<pair<int, int>> Q;
    Q.push({0,0}); //첫시작 큐에 집어넣기
    dist[0][0]=1; //첫번째 인덱스 거리를 시작점으로부터 1로 설정 
    //왜? 방문을 아예 안한 0이랑 구분하기 위해서
    
    while(!Q.empty()){
        //큐에서 원소를 꺼내서 그 칸에 인접한 상하좌우 칸에 대해 3번 진행
        auto current = Q.front();
        Q.pop();
        
        for(int dir = 0; dir<4; dir++){
            int next_x = current.X + dx[dir];
            int next_y = current.Y + dy[dir];
            
            if(next_x <0 || next_x>=n|| next_y<0 || next_y>=m) continue;
            if(dist[next_x][next_y] || board[next_x][next_y]!='1')continue;
            dist[next_x][next_y] = dist[current.X][current.Y]+1;
            
            Q.push({next_x, next_y});
        }
    }
    cout << dist[n-1][m-1];
}


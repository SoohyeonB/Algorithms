#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second



int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    
    cin >> T;
    
    while(T--){
        int dist[51][51]={0};
        int board[51][51]={0};
        int m, n, k;
        int worms=0;
        cin >> m>>n>>k;
        
        while(k--){
            int x, y;
            cin >>x>>y;
            board[y][x]=1;
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                //배추가 없거나 방문한 경우 pass
                if(board[i][j]==0 || dist[i][j]) continue;
                
                worms++;
                queue<pair<int, int>> Q;
                Q.push({i, j});
                
                while(!Q.empty()){
                    //큐에서 빼서
                    auto cur = Q.front();
                    Q.pop();
                    
                    //상하좌우 확인
                    for(int dir = 0; dir<4; dir++){
                        int nx = cur.X+dx[dir];
                        int ny = cur.Y+dy[dir];
                        
                        //범위 밖으로 벗어나지 않게 if문 걸어주기
                        if(nx <0 ||nx>=n || ny<0|| ny>=m) continue;
                        //방문했거나 배추가 없는 칸인 경우
                        if(dist[nx][ny] || board[nx][ny]==0)continue;
                        
                        dist[nx][ny] = 1; //방문으로 바꿈
                        Q.push({nx, ny});
                    }
                    
                }
            }
        }
        
        cout << worms <<'\n';
        
    }
    
    return 0;
}

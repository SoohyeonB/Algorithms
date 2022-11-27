#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int dist[100001];

int dx[3]={1,-1,0};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n>>k;
    
    queue<int> Q;
    Q.push(n);
    dist[n]= 1;//초기값을 0으로 설정
    
    while(!Q.empty()){
        //큐에서 원소를 꺼내서 앞으로 걸을 때, 뒤로 걸을 때, 뛸 때 세가지 확인
        int cur = Q.front();
        Q.pop();
        
        for(int dir=0; dir<3; dir++){
            int next;
            if(dx[dir]==0) next = cur*2;
            else next = cur+dx[dir];
            
            
            if(next <0 || next >100000) continue;
            if(dist[next] !=0) continue; //방문 했으면 continue
            
            dist[next] = dist[cur]+1;
            Q.push(next);
        }
    }
    
    cout <<dist[k]-1;
    
}

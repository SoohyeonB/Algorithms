#include <bits/stdc++.h>
using namespace std;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, s, y, answer=0;
    int std[2][7]={};
    
    cin >> n >> k;
    
    for(int i=0; i<n; i++){
        cin >> s >>y;
        std[s][y]++;
    }
    
    for(int i=0; i<2; i++){
        for(int j=1; j<7; j++){
            answer += (std[i][j]/k);
            if(std[i][j]% k) ++answer;
        }
    }
    
    cout << answer;
    
    return 0;
}

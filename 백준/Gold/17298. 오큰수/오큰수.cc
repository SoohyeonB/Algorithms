#include <bits/stdc++.h>
using namespace std;

int a[1000000]; //수열의 크기에 맞춘 공간
int ans[1000000]; //정답 배열 공간

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  stack<int> tower;
  cin >> n; 
  //수열 입력받기
  for(int i=0; i<n; i++) cin >> a[i]; //3 5 2 7
  
  //입력받은 수열 뒤에서부터 읽기
  for (int i =n-1; i >=0; i--) {
    while (!tower.empty() && tower.top() <= a[i]) 
        tower.pop(); 
    if(tower.empty()) ans[i] = -1; //만족하는 오큰수가 없으므로 -1
    else ans[i] = tower.top();
    
    tower.push(a[i]);

  }
  
  //출력
  for(int i=0; i<n; i++) cout << ans[i]<< ' ';
}
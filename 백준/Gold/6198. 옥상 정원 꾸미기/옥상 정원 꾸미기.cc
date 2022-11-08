#include <bits/stdc++.h>
using namespace std;


int N;
stack<int> tower;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N; 
  long long sum=0;
  
  for (int i = 1; i <= N; i++) {
    int height;
    cin >> height;
    
    while (!tower.empty() && tower.top() <= height) { // && 앞뒤 순서 바뀌면 안됨
        tower.pop(); 
    }
    
    sum += tower.size();
    
    tower.push(height);   
  }
  
  cout << sum;
}
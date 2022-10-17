#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int max = 0;
  int maxNum=0;
  for(int i=1; i<=9; i++){
    int t;
    cin >> t;
    if(t>max) {
        max = t; maxNum=i;
        
    }
  }
  
  cout << max<<"\n" << maxNum;
}
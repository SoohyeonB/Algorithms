#include <bits/stdc++.h>
using namespace std;

int main(void) {
  
  int a, b, c;
  cin >> a>>b>>c;
  
  if(a==b){
      if(b==c) cout << 10000+a*1000; //세개
      else cout << 1000+a*100; //a==b
  }
  else if(b==c) cout << 1000+b*100;
  else if(a==c) cout << 1000+a*100;
  else cout << max(max(a,b), c)*100;
  
  

}



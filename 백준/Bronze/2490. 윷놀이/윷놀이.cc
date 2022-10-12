#include <bits/stdc++.h>
using namespace std;

int main(void) {
  
  string result="";
  
  for(int i=0; i<3; i++){
      int n=0;
      for(int j=0; j<4; j++){
          int t;
          cin >> t;
          n+=t;
      }
      
      if(n ==0) result +="D\n";
      else if(n ==1) result +="C\n";
      else if(n==2) result +="B\n";
      else if(n==3) result +="A\n";
      else result +="E\n";
    
  }

    cout << result;
}



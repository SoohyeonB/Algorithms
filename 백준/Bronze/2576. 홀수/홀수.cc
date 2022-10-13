#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int min = 100;
    int sum=0;
    int flag=0;
  for(int i=0; i<7; i++){
      int t;
      cin >> t;
      if(t%2!=0){
          if(t<min) min = t;
          sum+=t;
      }
  }
  
  if(sum) {
      cout << sum<<"\n"; 
      cout<<min;
  }
  else cout <<-1;
  
  
}




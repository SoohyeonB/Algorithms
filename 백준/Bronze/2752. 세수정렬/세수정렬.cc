#include <bits/stdc++.h>
using namespace std;

int main(void) {
  
  vector<int> arr;
  for(int i=0; i<3; i++){
      int t;
      cin >> t;
      arr.push_back(t);
  }
  
  sort(arr.begin(), arr.end());
  
  for(int i=0; i<3; i++){
      cout << arr[i]<< " ";
  }

}



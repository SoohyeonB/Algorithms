#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int sum=0;
    int mid;
    vector<int> arr;
    for(int i =0; i<5; i++){
        int t;
        cin >>t;
        arr.push_back(t);
        sum+=t;
    }
    
    cout << sum/5 <<"\n";
    sort(arr.begin(), arr.end());
    cout << arr[2];
    
  
  
}




#include <bits/stdc++.h>
using namespace std;

int main (void){
    int n;
    cin >> n;
    
    vector<int> callTimes;
    for(int i = 0; i<n; i++){
        int t;
        cin >> t;
        callTimes.push_back(t);
    }
    
    
    int Y =0;
    int M=0;
    
    for(int i=0; i<n; i++){
        Y +=(callTimes[i]/30+1)*10;
        M += (callTimes[i]/60+1)*15;
    }
    
    if(M >Y) cout << "Y "<< Y;
    else if(M==Y) cout << "Y M " << Y;
    else cout << "M "<< M;
    
    
    
    return 0;
}



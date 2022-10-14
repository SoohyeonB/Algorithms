#include <bits/stdc++.h>
using namespace std;

int main (void){
    long long a, b;
    cin >> a >> b;
    
    if(a>b) swap(a,b);
    if(a==b) cout << 0;
    else{
        cout << (b-1)-(a+1)+1<<"\n"; // 9 9 -> 8-10+1
    }
    
    for(long long i=a+1; i<b; i++){
        cout << i<<" ";
    }
    
    return 0;
}


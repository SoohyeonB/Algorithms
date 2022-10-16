#include <bits/stdc++.h>
using namespace std;

int main (void){
    vector<int> cards;
    for(int i=0; i<20; i++){
        cards.push_back(i+1);
    }

    
    for(int i=0; i<10; i++){
        int a, b;
        cin >> a >>b; 
        reverse(cards.begin()+a-1, cards.begin()+b);
    }
    
    for(int i=0; i<20; i++){
        cout << cards[i] <<" ";
    }
    
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
const int SIZE=10;

int main (void){
    int roomNum;
    cin >> roomNum;
    
    vector<int> nums(SIZE);
   
    while(roomNum){ 
        nums[roomNum%10]++; 
        roomNum /=10; 
    }
    nums[6] = (nums[6]+nums[9]+1)/2;
    nums[9] = 0;
    
    cout << *max_element(nums.begin(), nums.end());
    
    
    return 0;
}




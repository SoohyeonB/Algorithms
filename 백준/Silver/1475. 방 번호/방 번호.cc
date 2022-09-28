#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n;
    cin >> n;
    
    vector<int> nums(9);
    
    while(n>0){
        if(n%10 ==9)
            nums[6]++;
        else
            nums[n%10]++;
        n/=10;
    }
    
    nums[6] = (nums[6]+1)/2;
    
    int result = *max_element(nums.begin(), nums.end());
    cout << result;

    

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> numbers;
    //입력받기
    while(n--){
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    
    //내림차순으로 정렬하기
    sort(numbers.begin(), numbers.end(), greater<int>());
    
    //출력
    for(int i:numbers){
        cout << i <<'\n';
    }
}

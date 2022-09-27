#include <iostream>
#include <vector>
#include <algorithm>
/*시간 복잡도 nlogn을 사용해야하기 때문에 nlogn의 시간복잡도를 가진
정렬들 힙정렬, 병합정렬, 퀵 정렬 중 퀵 정렬을 사용했다. 
*/

using namespace std;
int main(){
    int n, tmp;
    vector<int> numbers;
    
    cin >> n;
    
    for(int i =0; i<n; i++){
        cin >> tmp;
        numbers.push_back(tmp);
    }
    
    sort(numbers.begin(), numbers.end());
    
    for(int i=0; i<n; i++)
        cout << numbers[i]<< '\n';
    
}
#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

//argc: os가 프로그램을 실행했을때 전달되는 인수의 개수
//argv: 프로그램으로 전달된 실제 인수 값, cmd창에서 입력되는 모든 것을 문자열로 전달함
//		이중 포인터로 문자열 배열을 가리킴
int main(int argc, char* argv[]){
	int n;
	queue<int> q;

	cin >> n;

	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}

	while (q.size() > 1) { //큐가 비어있지 않으면
		q.pop(); //맨위에 있는 걸 꺼내서
		q.push(q.front()); //큐의 앞에 push
		q.pop();
	}

	cout << q.front() << endl;

	return 0;
}
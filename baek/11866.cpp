#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	int num, rule;
	vector<int> q;

	scanf( "%d %d", &num, &rule );	// 조건 입력받음

	for( int i = 1 ; i <= num ; i++ ) q.push_back( i );	// Queue 구성
	
	int i = 1; //index는 1부터 시작, index가 rule과 동일하면 출력, 아닐경우 push_back()
	cout << "<"; // 출력 형식 맞추기
	while( q.size() != 0 ){	// queue의 사이즈가 0이 될때까지 반복
		int tmp = q[0];
		q.erase( q.begin() ); 	// queue의 front에서 pop
		if( i == rule ){		// index가 rule과 동일하면, 해당 숫자를 출력
			if( q.size() == 0 ) cout << tmp << ">\n"; // 출력양식을 맞추기 위해 if, else
			else cout << tmp << ", ";
			i = 1;	// index를 원래대로 
		}else{
			q.push_back( tmp );	// 해당 원소가 규칙에 해당하지 않을 경우 push_back
			i++;	// index를 1증가
		}
	}
}

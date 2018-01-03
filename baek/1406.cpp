#include <iostream>
#include <string.h>
#include <vector>
#include <stack>
using namespace std;

// 완전 잘못 접근해서 풀었음
// 커서를 기준으로 문자열을 나눠서 두개의 스택을 사용해서 풀어야함 
int main(){
	stack<char> ls, rs;
	string word;
	char cmd;
	int cn;
	cin >> word;

	for (int i = 0 ; i < word.size() ; ++i)
		ls.push(word[i]);

	cin >> cn;
	while( cn-- ){
		cin >> cmd;
		switch(cmd){
			case 'L':
				if( ls.size() != 0 ){
					rs.push(ls.top());
					ls.pop();
				}
				break;
			case 'D':
				if( rs.size() != 0 ){ 
					ls.push(rs.top());
					rs.pop();
				}
				break;
			case 'B':
				if( ls.size() != 0 ) ls.pop();
				break;
			case 'P':
				char add;
				cin >> add;
				ls.push(add);
				break;
		}
	}

	// ls에 문자열이 거꾸로 들어있기 때문에 rs로 옮기면 문자열이 정상순서가 됨 
	while( rs.size() != 0 ){
		ls.push(rs.top());
		rs.pop();
	}
	while( ls.size() != 0 ) {
		rs.push(ls.top());
		ls.pop();
	}
	while( rs.size() != 0 ){
		cout << rs.top();
		rs.pop();
	}
}

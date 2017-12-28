#include <iostream>
#include <vector>
#include <stack>
#include <string.h>

using namespace std;

int main(){
	char word[100001];
	int res = 0;
	stack<char> st;
	cin >> word;
	int len = strlen(word);
	// stack 사용
	for( int i = 0 ; i < len ; i++ ){
		switch( word[i] ){
			case '(':
				st.push(word[i]);
				break;
			case ')':
				st.pop();
				if( word[i-1] == '(' ) // 레이저일 경우
					res += st.size();
				else // 막대의 끝일 경우
					res ++;
				break;
		}
		
	}
	// stack을 사용하지 않고
	int sum =0, res2 = 0;
	// for( int i = 0 ; word[i] //여기가 true일때 조건이 실행되니까?  ; i++ )
	for( int i = 0 ; i < len ; i++ ){
		// stack size 대신 '('의 갯수로 
		if( word[i] == '(' ) sum ++;
		else{
			sum--;
			if( word[i-1] == '(' ) res2 += sum;
			else res2++;
		}
	}
	printf("res : %d %d\n", res, res2);
}


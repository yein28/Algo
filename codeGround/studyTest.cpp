#include <iostream>
#include <cstdio>
using namespace std;

/*
	DP문제 일줄 알았는데 아니였음! 
	INPUT의 갯수와는 상관없이 점수의 범위는 0~100점이기 때문에 
	점수의 갯수를 세는 배열을 만들고 점수가 들어올때 마다 해당 배열의 값을 ++해줌
	그리고 뒤에서 부터 공부할 수 있는 과목의 갯수만큼 더해주면 끝
*/

int Answer;
int main(int argc, char** argv){
	int T, tc, max, can, m, tmp;

	cin >> T;
	
	for( tc = 0; tc < T; tc++){
		int score[101]={0,}; // 전역 변수를 main바깥에서 초기화 해주면 점수를 깎는듯
		Answer = 0;
		m = 100;
		
		cin >> max >> can;

		for( int i = 0 ; i < max ; i++ ){
			cin >> tmp;
			score[tmp]++;
		}

		while( can != 0 ){
			if( score[m] > 0 ){
				Answer += m;
				score[m]--;
				can--;
			}else{
				m--;
			}
		}

		cout << "Case #" << tc+1 << endl;
		cout << Answer << endl;
	}
}

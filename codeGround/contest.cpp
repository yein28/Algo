#include <iostream>
#include <algorithm>

using namespace std;

int Answer;

int main(int argc, char** argv ){
	int T, tc, num;

	cin >> T;
	for( tc = 0; tc < T ; tc++ ){
		int s[300001];
		Answer = 0;

		cin >> num;
		
		for( int i = 0 ; i < num ; i++ ){
			cin >> s[i];
		}

		sort( s, s + num ); // sort the input data

		// calculate minimum win score
		// 정렬한 데이터가 1,2,3,4라면 차례대로 4,3,2,1의 점수를 부여해서
		// 우승할 수 있는 최소의 점수를 구한다.
		int win = 0;
		for( int i = 0 ; i < num ; i++ ){
			int tmp = s[i] + num - i;
			if( win < tmp )
				win = tmp;
		}
	
		// checking possible winner
		// 정렬한 데이터에 최대의 점수 N을 더했을때
		// 우승할 수 있는 최소의 점수를 넘는지 체크한다.
		for( int i = 0 ; i < num ; i++ ){
			if( ( s[i] + num ) >=  win )
				Answer++;
		}
		
		cout << "Case #" << tc+1 << endl;
		cout << Answer << endl;
	}
	return 0;
}

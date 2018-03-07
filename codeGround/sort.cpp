#include <iostream>
#include <algorithm>

using namespace std;

/*
* 2018-03-07
* tried to solve without using sorting library, but it failed.
*/

int Answer;
int arr[10001];
int main(int argc, char **argv ){
	int T, tc;
	cin >> T;

	for( tc = 0 ; tc < T ; tc++ ){
		Answer = 0; // 전역변수의 초기화가 중요한듯..?
		int num;
		cin >> num;
		for( int i = 0 ; i < num ; i++ ){
			cin >> arr[i];
		}
		sort( arr, arr + num );

		for( int i = 0 ; i < num ; i++ ){
			if( i % 2 == 0 )
				Answer = Answer + arr[i];
			else
				Answer = Answer + ( arr[i] * -1 );
		}
		cout << "Case #" << tc+1 << endl;
		cout << Answer << endl;
	}
	return 0;
}

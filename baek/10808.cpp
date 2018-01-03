#include <iostream>
using namespace std;
// 쉬움! 아스키 코드 이용해서 인덱스를 계산하면 된다.
int main(){
	string input;
	int arr[26]={0,};
	cin >> input;
	for( int i = 0 ; i < input.size() ; i++ ){
		int idx = input[i] - 'a';
		arr[idx]++;
	}
	for( int i = 0 ; i < 26 ; i++ ){
		printf( "%d ", arr[i] );
	}
}

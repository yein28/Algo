#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int tc, result = 0;
	char word[101];

	cin >> tc; // 테스트 케이스를 입력받음
	result = tc; // 그룹단어의 수 == 테스트 케이스의 수로 초기화
	while( tc-- ){
		int check[26]={0,}; // 알파벳 26글자의 배열
		cin >> word; // 테스트 케이스 입력받음
		int len = strlen(word);
		for( int i = 0 ; i < len ; i++ ) {
			int c = word[i] - 'a'; 	// 알파벳을 숫자로 변환
			if( word[i] != word[i+1] ){
				check[c]++; 		// 해당하는 알파벳이 다음알파벳과 다를 경우 알파벳배열의 플래그 +1
				if( check[c] > 1 ){ // 플래그가 1보다 커졌다는 것은 연속하지 않은 알파벳이 나왔다는 것
				 	result--;		// 결과를 쉽게 출력하기 위해 그룹단어의 수를 한개 줄임 
					break;			// break로 for문 탈출
				}
			}
		}
	}
	cout << result << "\n";
	return 0;
}

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	/* 공백의 갯수를 세서 계산, 문자열의 시작이나 끝이 띄어쓰기인 경우에만 예외처리 */
	int size = 1;
	string word;
	getline( cin, word );
	
	if( word[0] == ' ' ) size = 0;
	for( int i = 0 ; i < word.size() ; i++ ){
		if( word[i] == ' ' )
			size ++;
	}
	if( word[word.size()-1] == ' ' ) size--;

	cout << size << endl;

	return 0;
}

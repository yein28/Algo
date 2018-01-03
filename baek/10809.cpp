#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char word[101];
	int index[26];
	
	fill_n( index, 26, -1 );
	cin >> word;
	int len = strlen(word);

	for( int i = 0 ; i < len ; i++ ){
		int c = word[i] - 'a';
		if( index[c] == -1 ){ index[c] = i; }
	}

	for( int j = 0 ; j < 26 ; j++ ){
		cout << index[j] << " ";
	}

	return 0;
}

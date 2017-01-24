#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int tc, result = 0;
	char word[101];

	cin >> tc;
	result = tc;
	while( tc-- ){
		int check[26]={0,};
		cin >> word;
		int len = strlen(word);
		for( int i = 0 ; i < len ; i++ ) {
			int c = word[i] - 'a';
			if( word[i] != word[i+1] ){
				check[c]++;
				if( check[c] > 1 ){
				 	result--;
					break;
				}
			}
		}
	}
	cout << result << "\n";
}

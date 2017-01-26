#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
char word[1000001];
int main(){
	int index[26]={0,};
	char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
		'Q','R','S','T','U','V','W','X','Y','Z'};

	cin >> word;
	int len = strlen(word);	
	int max = 0;
	int in = 0;

	for( int i = 0 ; i < len ; i++ ){
		char tmp = tolower( word[i] );
		int c = tmp - 'a';
		index[c]++;
		if( index[c] > max ){
			in = c;
			max = index[c];
		}
	}
	sort( index, index + 26 , greater<int>() );
	if( index[0] == index[1] ){ cout << "?\n"; }
	else cout << alpha[in] << "\n";
}

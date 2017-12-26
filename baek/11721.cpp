#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char str[101];

	scanf("%s", str);

	int i = 0, j = 0;
	int len = strlen(str);
	// 1 >> 내가 푼거..ㅠㅠ
	while( i < len ){
		for( j = i ; j < i + 10 ; j++ ){
			if( j == len ) break;
			printf("%c",str[j]);
		}
		printf("\n");
		i = j;
	}
	// 2 >> 제출된 답..
	for( int i = 0 ; i < strlen(str) ; i++ ){
		if( i != 0 && i % 10 == 0 ) printf("\n");
		printf("%c", str[i] );
	}
}


#include <iostream>
#include <string.h>

int main(){
	int a, b, c, res;

	char str[11];
	int num[10] = {0,};

	scanf("%d %d %d", &a, &b, &c ); 
	res = a * b * c;

// 다른 사람 코드, ㅎㄷㄷ
	for( int i = res ; i ; i /= 10 ){
	//	printf( "%d %d\n", i, i %10);
		num[i%10]++;
	}

// 내가 했던거 
/*	sprintf(str, "%d", res );
	
	for( int  i = 0 ; i < strlen(str) ; i++ ){
		int idx = str[i] - '0';
		num[idx]++;
	}
*/	
	for( int i = 0 ; i < 10 ; i++){
		printf("%d\n", num[i]);
	}

	/*
	for( int i = a*b*c ; i ; i/10) a[i%10
	*/
}	

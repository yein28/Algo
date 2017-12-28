#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
	int size,res = 0;
	double num;
	char buf[101];

	scanf("%d", &size);
// 서식문자열 옵션으로 해결
	for( int i = 0 ; i < size ; i++ ){
		int x;
		scanf("%1d", &x );
		res += x;
	}
// 숫자를 문자로 받아서 해결 
/*	scanf("%s", buf);
	
	for( int i = 0 ; i < size ; i++ ){
		char ch = buf[i];
		int sum = ch - '0';
		res = res + sum;
	}
*/
	printf("%d \n", res );

// 굳이 숫자를 숫자로 받으려고해서 삽질함..
/*	double n;
	scanf("%d", &num);
	scanf("%lf", &n);
	for( int i = num ; i > 0 ; i-- ){
		double mod = pow(10, i-1);
		int sum	= n / mod;
		n = n % mod;
		res = res + sum;
	}
	printf("%d", res );*/
}

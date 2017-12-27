#include <iostream>

int main(){
	char n[10];

	int cycle =0;
	int num, comp = 0;
	int n1, n2, sum, origin;
	
	scanf("%d", &num );
	if( num < 10 ) num = num * 10;
	origin = num;
	while( 1 ){
		n1 = num / 10;
		n2 = num % 10;

		sum = n1 + n2;
//		comp = n2 * 10 + sum % 10;
		num = n2 * 10 + sum % 10;
		
		cycle++;

		if( num == origin ) break;
//		else num = comp;
	}
	printf("%d", cycle);
}

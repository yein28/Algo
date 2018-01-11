#include <cstdio>
int go( int n);
int d[1000001];
int main(){
	int n;
	scanf("%d",&n);
//  bottom_up
	d[1] = 0;
	for( int i = 2 ; i <= n ; i++ ){
		d[i] = d[i-1] + 1;
		if( i%2 == 0 && d[i] > d[i/2] + 1 )
			d[i] = d[i/2] + 1;
		if( i%3 == 0 && d[i] > d[i/3] + 1 )
			d[i] = d[i/3] + 1;
	}
	printf("%d", d[n] );
//	printf("%d",  go(n) ); // top down
	return 0;
}

// top_down : 재귀
int go( int n){
	if( n == 1 ) return 0;
	if( d[n] > 0 ) return d[n]; // momoization
	// 세가지 경우 1. -1한거 2. 2로 나누어떨어짐 3. 3으로 나누어 떨어짐
	d[n] = go(n-1) + 1; 
	if( n % 2 == 0 ){
		int tmp = go(n/2) + 1;
		if(d[n] > tmp ) d[n] = tmp;
	}
	if( n % 3 == 0 ){
		int tmp = go(n/3) +1;
		if(d[n] > tmp ) d[n] = tmp;
	}
	return d[n];
}	

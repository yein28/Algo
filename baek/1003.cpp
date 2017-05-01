#include<iostream>
using namespace std;

int fibonacci( int n );
int result[2]={0,};

int main(){
	int tc = 0;
	cin >> tc;
	
	while( tc-- ){
		int num;
		cin >> num;
		fibonacci( num );
		printf( "%d %d\n", result[0], result[1] );
		result[0] = 0;
		result[1] = 0;
	}
}

int fibonacci( int n ){
	if( n == 0 ){
		result[0]++;
		return 0;
	}else if( n == 1 ){
		result[1]++;
		return 1;
	}else{
		return fibonacci( n - 1 ) + fibonacci( n - 2 );
	}
}

#include<iostream>
using namespace std;
//float test[1000];
int tc, score, max, sum;
int main(){
/*	int i,tc;
	float max = 0, result = 0;
	cin >> tc;
	for( i = 0 ; i < tc ; i++ ){
		cin >> test[i];
		max = ( test[i] >= max ) ? max = test[i] : max;
	}
	for( i = 0 ; i < tc ; i++ ){
		test[i] = ( test[i] / max ) * 100;
		result = result + test[i];
	}
	printf( "%.2f", result/tc );
*/
	// 수정 후 
	// 점수를 따로따로 받은 뒤에 계산하는거나, 받으면서 합하고 계산하는거나
	// 결과는 동일함
	int tc, score, max=0, sum=0;
	cin >> tc;
	for( int i = 0 ; i < tc ; i++ ) {
		cin >> score;
		sum += score;
		if( score >= max ) max = score;
	}
	printf( "%.2f", (float)sum/tc/max*100 );
}

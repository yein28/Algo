#include<cstdio>
#include<iostream>
using namespace std;
int tc,sn,sum,avg;
float cnt;
int score[1000];
int main(){
	scanf( "%d", &tc );
	while( tc -- ){
		sum = 0, cnt = 0;
		scanf( "%d", &sn );
		for( int i = 0 ; i < sn ; i++ ){
			scanf( "%d", &score[i] );
			sum += score[i];
		}
		avg = sum / sn;
		for( int i = 0 ; i < sn ; i++ )
			if( score[i] > avg ) cnt++;
		printf("%.3f%% \n",(float)cnt/sn*100 );
	}
}

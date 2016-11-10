#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
	int test; // 테스트케이스 개수
	cin >> test;
	for( int k = 1 ; k <= test ; k++ ){
		vector<int> numArr;
		int num, x;
		int output = 0;
		cin >> num;
		for( int i = 0 ; i < num ; i++ ){
			scanf("%d", &x );
			output = x^output;
		}
		printf("Case #%d\n%d\n", k,output );
	}
}


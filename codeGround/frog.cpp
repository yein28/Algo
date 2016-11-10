#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
	
	int test; // 테스트케이스 개수
	cin >> test;
	for( int k = 1 ; k <= test ; k++ ){
		vector<int> sCor;
		int sNum, x, maxJump;

		cin >> sNum;
		int t = sNum;
		//좌표를 입력받음
		while( t-- ){
			scanf("%d", &x );
			sCor.push_back(x);
		}
		cin >> maxJump;

		int curPos = 0;	
		int pos = 0;
		int j = 0, i = 0;
		int jump = 0;
	
		while(1){
			j = i;
			pos = curPos + maxJump;

			if( sCor[j] <= pos ){
				while( sCor[i] <= pos && i < sNum ){
					i++;
				}
				curPos = sCor[i-1];
				jump++;
				if( curPos == sCor[sNum-1] ) {
					printf("Case #%d\n%d", k,jump);
					break;
				}
			}
			else{
				jump = -1;
				printf("Case #%d\n%d", k,jump);
				break;
			}
		}
	}
	return 0;
}

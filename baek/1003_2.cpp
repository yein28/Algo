#include<iostream>
using namespace std;
// fibonacci(N) N은 40보다 작거나 같다.
const int MAX_N = 40; 
int dp[MAX_N+1][2]; // 0,1의 갯수를 기록

int main(){
	int tc; // 테스트케이스 갯수 
	
	// 피보나치 함수 fibonacci(i)가 0을 반환하는 횟수는 dp[i][0]에
	// 1을 반환하는 횟수는 dp[i][1]에 기록된다.
	// dp[i][0] = dp[i-1][0] + dp[i-2][0]
	dp[0][0] = 1; 
	dp[1][1] = 1;

	cin >> tc; 
	while(tc--){
		int n,i;
		cin >> n;
		for( i = 2 ; i <= n ; i++ ){
			dp[i][0] = dp[i-1][0] + dp[i-2][0];
			dp[i][1] = dp[i-1][1] + dp[i-2][1];
		}
		printf( "%d %d\n", dp[n][0], dp[n][1] );
	}
}

#include <iostream>
using namespace std;

int main(){   
	int n;
	cin >> n;

	int cost[1001][3];
	int cache[1001][3];
	int result = 0;

	for( int i = 0 ; i < n ; i++ )
	{   
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
	}

	cache[0][0] = cost[0][0];
	cache[0][1] = cost[0][1];
	cache[0][2] = cost[0][2];

	for( int i = 1 ; i < n ; i++ ){
		cache[i][0] = cost[i][0] + ( cache[i-1][1] < cache[i-1][2] ? cache[i-1][1] : cache[i-1][2] );
		cache[i][1] = cost[i][1] + ( cache[i-1][0] < cache[i-1][2] ? cache[i-1][0] : cache[i-1][2] );
		cache[i][2] = cost[i][2] + ( cache[i-1][0] < cache[i-1][1] ? cache[i-1][0] : cache[i-1][1] );
	}

	result = cache[n-1][0] > cache[n-1][1] ? ( cache[n-1][1] > cache[n-1][2] ? cache[n-1][2] : cache[n-1][1] ) : ( cache[n-1][0] > cache[n-1][2] ? cache[n-1][2] : cache[n-1][0] );

	cout << result << endl;

	return 0;
}


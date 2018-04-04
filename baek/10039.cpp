#include <iostream>
using namespace std;

int main(){
	int loop = 5;
	int score;
	int res = 0;
	while( loop-- ){
		cin >> score;
		if( score <= 40 ) res += 40;
		else res += score;
	}

	cout << res / 5 << endl;
	return 0;
}

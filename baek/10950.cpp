#include <iostream>
using namespace std;

int main(){
	int testNum;
	int a, b;
	cin >> testNum;
	while( testNum-- ){
		cin >> a >> b;
		cout << a+b << '\n';
	}
	return 0;
}

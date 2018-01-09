#include <iostream>
using namespace std;
int main(){
	char c;
	int len=0;
	while( scanf("%c", &c )!= EOF ){
		if( c == '\n' ) printf("%d", len);
		else len++;
	}
}

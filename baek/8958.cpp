#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int tc;
	cin >> tc;					// input testcase
	while( tc-- ){					
		char str[80];			// OX result holder
		cin >> str;				// input OX result to holder
		int len = strlen(str);  // caculate string length
		int cnt = 1;			// set count = 1
		int result = 0; 		// set result = 0;
		for( int i = 0 ; i < len ; i++ ){
			if( str[i] == 'O' ){// if result is O 
					result = result + cnt; // result = result + count 
					cnt++; // cnt is the "number of consecutive 'O'"
			}else{
				cnt = 1; // if result is X reset the cnt to 1
			}
		}
		cout << result << "\n"; // print the result
	}
}

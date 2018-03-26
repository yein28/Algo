#include <iostream>

using namespace std;

int main(){
	int seq[8];
	int flag = 0;

	for( int i = 0 ; i < 8 ; i++ ){
		cin >> seq[i];
	}	

	if( seq[0] == 1 ){
		for( int i = 1 ; i < 8 ; i++ ){
			if( seq[i] == i + 1 ){
				flag = 1;
			}else {
				flag = 0;
				break;
			}
		}
	}else if( seq[0] == 8 ){
		for( int i = 7 ; i > 0 ; i-- ){
			if( seq[i] + i == 8 ){
				flag = 2;
			}else{
				flag = 0;
				break;
			}
		}
	}

	if( flag == 1 )
		cout << "ascending" << endl;
	else if( flag == 2 )
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;
}

#include <iostream>
#include <cstring>
#include <deque>
using namespace std;
int main(){
	deque<int> d;
	int n, input;
	char cmd[20];
	cin >> n;
	while( n-- ){
		scanf("%s", cmd);
		if( !strcmp( cmd, "push_front" ) ) {
			cin >> input;
			d.push_front(input);
		}else if( !strcmp( cmd, "push_back" ) ){
			cin >> input;
			d.push_back(input);
		}else if( !strcmp( cmd, "pop_front" ) ){
			if( !d.empty() ){ 
				cout << d.front() << endl; 
				d.pop_front();
			}else{ cout << "-1" << endl; }
		}else if( !strcmp( cmd, "pop_back" ) ){
			if( !d.empty() ){ 
				cout << d.back() << endl; 
				d.pop_back();
			}else{ cout << "-1" << endl;}
		}else if( !strcmp( cmd, "size" ) ){
			cout << d.size() << endl;
		}else if( !strcmp( cmd, "empty" ) ){
			if( d.empty() ){  cout << "1" << endl; }
			else{ cout << "0" << endl; }
		}else if( !strcmp( cmd, "front" ) ){
			if( !d.empty() ){ cout << d.front() << endl; }
			else{ cout << "-1" << endl; }
		}else if( !strcmp( cmd, "back" ) ){
			if( !d.empty() ){ cout << d.back() << endl; }
			else{ cout << "-1" << endl; }
		}
	}
	return 0;
}

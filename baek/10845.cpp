#include <iostream>
#include <vector>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
	int test;
	string word;
	vector<int> stack;
	
	cin >> test;
	while( test-- ){
		cin >> word;

		if( word.find( "size" ) != string::npos){
			cout << stack.size() << "\n";
		}
		else if( word.find( "empty" ) != string::npos){
			if( stack.empty()) cout << 1 << "\n"; 
			else cout << 0 << "\n";
		}
		else if( word.find( "back" ) != string::npos){
			if( stack.empty() ){ cout << -1 << "\n"; }
			else{
				int num = stack.back();
				cout << num << "\n";
			}
		}
		else if( word.find( "pop" ) != string::npos){
			if( stack.empty() ){
				cout << -1 << "\n";
			}else{ 
				int tmp = stack[0];
				stack.erase( stack.begin() );
				cout << tmp << "\n";
			}
		}
		else if( word.find( "front" ) != string::npos ){
			if( stack.empty() ){
				cout << -1 << "\n";
			}else{
				cout << stack[0] << "\n";
			}
		}
		else if(word.find( "push" ) != string::npos){
			int num = 0;
			cin >> num;
			stack.push_back(num);
		}	
	}
}

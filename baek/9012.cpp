#include <iostream>
#include <vector>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
	int test;
	char word[51];

	cin >> test;
	while( test-- ){
		vector<int> stack;
		cin >> word;
		int len = strlen(word);
		for( int i = 0 ; i < len ; i++ ){
			switch( word[i] ){
				case '(':
					stack.push_back(word[i]);
					break;
				case ')':
					if( stack.empty() ){
						stack.push_back(word[i]);
						break;
					}
					else{
						char tmp = stack[stack.size()-1];
						if(  tmp == '(' ){
							stack.pop_back();
						}
					}		
			}
		}
		if( stack.empty() ) cout << "YES \n";
		else cout << "NO \n";
	}
}

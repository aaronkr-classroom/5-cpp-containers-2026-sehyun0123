#include<vector>
#include<string>
#include<iostream>
#include"frame.h"
#include"split_str.h"

using namespace std;

int main(void) {
	string s;
	
	cout << "Enter strings ,EOF to quit: ";

	while (getline(cin, s)) {
		vector<string> v = split(s);
		vector<string> fr = frame(v);

		//벡터 v에 저장한 단어를 각각 출력
		for (vector<string>::size_type i = 0;
			i != v.size(); i++) {
			cout << v[i] << endl;
		}
	}
	return 0;
}

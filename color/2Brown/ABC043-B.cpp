/*
まっ、これも地道な作業ですね

０なら0文字を足す

１なら1文字を足す

Bなら最後の文字を消す、ただ文字列が空の時はスルー
*/

#include <iostream>
//#include <vector>
#include <string>
//#include <algorithm>

using namespace std;


int main() {
	
	string str;
	string ans = "";

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '0') { ans += '0'; }
		else if (str[i] == '1') { ans += '1'; }
		else if (str[i] == 'B' && ans.length() != 0) {
			ans.pop_back();
		}
	}
	cout << ans;
	return 0;
}
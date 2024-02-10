/*
この問題も意外とシンプルで

入力整数Nを毎回1をプラスし、int vector内の数字が含まれてるかどうかを地味時に判断していく
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int check_num(int n, const std::vector<int>& vec) {
	string nStr = to_string(n);
	for (int digit : vec) {
		if (nStr.find('0' + digit) != string::npos) {
			return 0;
		}
	}
	cout << n;
	return 1;
}

int main() {
	
	int n, k;
	cin >> n >> k;
	vector<int> vec(k);
	for (int i = 0; i < k; i++) {
		cin >> vec[i];
	}

	while (1) {
		if (check_num(n, vec)) break;
		n++;
	}

	return 0;
}
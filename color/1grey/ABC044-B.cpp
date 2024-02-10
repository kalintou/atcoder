/*
これも基本中の基本の問題

アイディアとしてはmapを使っていく

INPUTした文字列を一文字ずつMAPに挿入、同時にカウント

最後にもう一回MAPの各要素のsecondが偶数かどうか確認
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int flag = 1;

int main() {
	
	string str;
	cin >> str;

	unordered_map<char, int> map;

	for (int i = 0; i < str.size(); i++) {
		map[str[i]]++;
	}

	for (const auto& pair : map) {
		if (pair.second % 2 == 1) flag = 0;
	}

	if (flag) cout << "Yes";
	else cout << "No";

	return 0;
}
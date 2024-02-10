/*
これはシンプルにstring vectorを辞書順に並べ替える問題

並べ替えalgorithmはそのままC++のsortを使用
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	
	int n, l;
	string ans = "";
	cin >> n >> l;
	vector<string> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; i++) {
		ans += vec[i];
	}

	cout << ans;

	return 0;
}
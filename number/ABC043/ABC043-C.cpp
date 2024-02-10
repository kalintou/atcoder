/*
これも気づけばNの範囲が小さいので、乱暴にコードを書いていく

アイディアとしては、値られた数字列の最小値から最大値まで一つ一つチェックしていくだけ
*/

#include <iostream>
#include <vector>
#include <string>
#include <limits>
//#include <algorithm>

using namespace std;


int main() {
	
	int max_num = numeric_limits<int>::min();
	int min_num = numeric_limits<int>::max();

	int total = numeric_limits<int>::max();

	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > max_num) max_num = tmp;
		if (tmp < min_num) min_num = tmp;
		vec[i] = tmp;
	}
	int mid = (max_num + min_num) / 2;
	int count = 0;

	for (int i = min_num; i <= max_num; i++) {
		int tmp = 0;
		for (int j = 0; j < vec.size(); j++) {
			tmp += (i - vec[j]) * (i - vec[j]);
		}
		if (tmp < total) total = tmp;

	}

	cout << total;

	return 0;
}
/*
自分では解けなかった

回答リンク：

[AtCoder ABC 043 D - アンバランス (ARC 059 D) (水色, 400 点) - けんちょんの競プロ精進記録 (hatenablog.com)](https://drken1215.hatenablog.com/entry/2020/10/29/133500)

意外とアイディアは簡単

1. まず文字が連続に出ていればアンバランス（例：’aa’）
2. 一文字空いていてもOK（例：’axa’）

で実はこれでもうすでに90％問題を解けていることになる。

なぜなら、2文字以上空いていたら、文字が過半数占めることは絶対にない！（例：’a??a??a??a’）

つまり計算量O（N）でいける
*/

#include <iostream>
#include <vector>
#include <string>
#include <limits>
//#include <algorithm>

//numeric_limits<int>::max()

using namespace std;


int main() {
	
	string str;
	cin >> str;
	int l = -1;
	int r = -1;
	for (int i = 0; i < str.size() - 1; i++) {
		if (str[i] == str[i + 1]) {
			l = i + 1;
			r = i + 2;
		}
		if (str[i] == str[i + 2] && i + 2 < str.size()) {
			l = i + 1;
			r = i + 3;
		}
	}
	cout << l << " " << r;

	return 0;
}
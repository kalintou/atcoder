/*
DP問題です

DPはとにかく多くの問題数をやるしかない

問題解説：

[AtCoder ABC 044 C - 高橋君とカード (ARC 060 C) (水色, 300 点) - けんちょんの競プロ精進記録 (hatenablog.com)](https://drken1215.hatenablog.com/entry/2020/04/24/025200)

アイディア

「平均値がA」というのは個数がｋ個のとき、総和がAk

dp[i][s][k] = N個の整数のうちの最初のi個から、ｋ個を選ぶ場合、総和をsにするものが何個あるか

DP遷移公式

- x[ i ] を選ばない場合： dp[ i + 1 ][ s ][ k ] += dp[ i ][ s ][ k ]
- x[ i ] を選ぶ場合： dp[ i + 1 ][ s + x[i]][ k + 1 ] += dp[ i ][ s ][ k ]
*/

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
//#include <limits>
//#include <unordered_map>
//#include <algorithm>

//numeric_limits<int>::max()

using namespace std;

long long dp[55][3000][55];

int main() {
	
	int n, a;
	cin >> n >> a;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	memset(dp, 0, sizeof(dp));
	dp[0][0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int s = 0; s < a * n; s++) {
			for (int k = 0; k <= n; k++) {
				if (dp[i][s][k] == 0) continue;
				dp[i + 1][s][k] += dp[i][s][k];
				dp[i + 1][s + vec[i]][k + 1] += dp[i][s][k];
			}
		}
	}
	long long res = 0;
	for (int k = 1; k <= n; ++k) res += dp[n][a * k][k];
	cout << res << endl;

	return 0;
}
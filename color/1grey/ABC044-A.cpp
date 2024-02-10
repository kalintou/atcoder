//流石に簡単すぎるのでそのままコードだけ

#include <iostream>
#include <vector>
#include <string>
#include <limits>
//#include <algorithm>

//numeric_limits<int>::max()

using namespace std;


int main() {
	
	int n, k, x, y;
	cin >> n >> k >> x >> y;
	if (n < k) cout << n * x;
	else cout << k * x + (n - k) * y;

	return 0;
}
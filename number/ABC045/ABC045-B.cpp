/*
これもまあ、シンプルな問題ですね

地道にコーディングしていけばOK
*/

#include <iostream>
#include <vector>
#include <string>
//#include <cstring>
//#include <limits>
//#include <unordered_map>
//#include <algorithm>

//numeric_limits<int>::max()

using namespace std;


int main() {
	string a, b, c;
	cin >> a >> b >> c;

	char turn = 'a';

	while (1) {
		if (turn == 'a') {
			if (a.size() == 0) {
				cout << "A";
				break;
			}
			turn = a[0];
			a = a.substr(1, a.size() - 1);
		}
		else if (turn == 'b') {
			if (b.size() == 0) {
				cout << "B";
				break;
			}
			turn = b[0];
			b = b.substr(1, b.size() - 1);
		}
		else if (turn == 'c') {
			if (c.size() == 0) {
				cout << "C";
				break;
			}
			turn = c[0];
			c = c.substr(1, c.size() - 1);
		}
	}

	return 0;
}
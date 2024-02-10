/*
これはちょっとさすがに舐めてますねGREY問題。。。ｗ

地道に判断していけばOK
*/

#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if(a+b == c || a+c == b || c+b == a) cout << "Yes";
	else cout << "No";
	return 0;
}
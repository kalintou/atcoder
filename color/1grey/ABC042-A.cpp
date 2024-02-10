/*
入力されたA、B、Cが５，７，５の形をしているかどうか

５，７，５

５，５，７

７，５，５

であればOK

５，５，５や７，７，５など５，７，５の形をしていなければNO

解き方：

まずA、Ｂ、Ｃが５と７のどちらかであるかを判断

そしてtotal（１７）からＡ、Ｂ、Ｃを引いていく

最後のtotalが０であれば、５，７，５の形である
*/

int main() {
	
	int a, b, c;
	cin >> a >> b >> c;
	int total = 17;

	if (a == 5 || a == 7) total -= a;
	else cout << "NO" << endl;
	if (b == 5 || b == 7) total -= b;
	else cout << "NO" << endl;
	if (c == 5 || c == 7) total -= c;
	else cout << "NO" << endl;
	if (total == 0) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
/*
ちょっと考える必要がある。

そのまま解法を見ました

アイディアは簡単：

この問題はつまり以下の条件を満たすiとjのペア数をカウントする問題

- 0 < = i <  j <  N
- vec[j] - vec[i] == MAX_SUB (MAX_SUBは売る/買うの距離)

なので、まあ意外とシンプル？次は自分で解けるようにね💛
*/



int main() {
    int n, t;
    
    int MAX_SUB = INT_MIN;
    cin >> n >> t;
    vector<int> vec(n);
		//data input
    REP(i, n) cin >> vec[i];
		//MAX_SUB要素を探す
    int MIN = vec[0];
    REP(i, n) {
        int tmp = vec[i];
        if (tmp > MIN) MAX_SUB = max(MAX_SUB, tmp - MIN);
        MIN = min(MIN, tmp);
    }
		//解説で言った通りのiとjを探す作業
    int res = 0;
    int tmp = vec[0];
    for (int i = 0; i < n; i++) {
        if (vec[i] - tmp == MAX_SUB) {
            res++;
            tmp = vec[i];
        }
        //更新を忘れずに
        tmp = min(tmp, vec[i]);
    }
    cout << res;

    return 0;
}
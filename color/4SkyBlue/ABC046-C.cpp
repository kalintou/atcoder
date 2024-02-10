int main() {
    int n;
    cin >> n; //画面を見た回数
    ll p = 1, q = 1; //約束,p,qは最初は1,1から始まる
    REP(i, n) {
        ll t, a; //毎回見た時のTとAの比数
        cin >> t >> a;

        //dというのは現在の得票数p,qを維持するために必要な最小倍率です。
        //(p / t)と(q / a)は現在の実際の投票数pとqからt/aを割る操作、割ると倍すdが出てくる
        //ただC＋＋の'/'操作は余りをのぞくので、(p % t ? 1 : 0)と(q % a ? 1 : 0)で余りを足すのを忘れずに
        //最後に現時点でのpとqの更新を忘れずに
        ll d = max(p / t + (p % t ? 1 : 0), q / a + (q % a ? 1 : 0));
        p = t * d;
        q = a * d;
    }

    cout << p + q << endl;
    return 0;
}
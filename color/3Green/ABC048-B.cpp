//意外と手こずってしまいましたね

//参考：

//[AtCoder ABC 048 B - Between a and b ... (200点) - 競プロ精進記録 (scrapbox.io)](https://scrapbox.io/yu2ta7ka/AtCoder_ABC_048_B_-_Between_a_and_b_..._(200%E7%82%B9))

int main() {
    ll a, b, x;
    cin >> a >> b >> x;
		//分岐の処理a=0はまだいいとして
    if (a == 0) cout << b / x + 1;
    else {
				//ここで躓いてしまいましたね
        ll res = b / x - (a-1) / x;
        cout << res;
    }
    return 0;
}
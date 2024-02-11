/*
典型的なbit全探索

まずはN桁の数字文字列が与えられる。

そのN-1個の間の部分に＋を入れる。

例えば’125’が与えられたとすると

125

1+25

12+5

1+2+5

のすべての通りの和を出力

確かにBIT全探索のアイディアが使えそうだ

ただどうやってコードで書いていくか？

まずBIT全探索のテンプレートはこうだ


//N個のアイテムからいくつ選ぶかは2^N通りある
for (int bit = 0; bit < (1<<N); ++bit) {

}

//現bitに対して、iを選ぶかどうかを判断する
if (bit & (1 << i)) {

}

１＋２５みたいなものはどう処理するのか？

long long tmp変数を利用

以下コード

*/


long long res = 0;
for (int bit = 0; bit < (1<<(N-1)); ++bit) {
    long long tmp = 0;
    for (int i = 0; i < N-1; ++i) {
        tmp *= 10;
        tmp += S[i] - '0';
        if (bit & (1<<i)) res += tmp, tmp = 0;
    }
    tmp *= 10;
    tmp += S.back() - '0';
    res += tmp;
}

//なるほど、これでOKだね！
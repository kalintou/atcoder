/*
この問題は少しトリッキー、自分ではできなかった

二つの解法を紹介する

まずは簡単なCHATGPTさんの解法

着目点としては、最初のボールを塗る選択肢と、それ以降のボールを塗る選択肢

まずシンプルに最初のボールを塗る選択肢はK通りあります。

2番目以降のボールは直前のボールと違う色でなければならない、つまりK-1通りから選ぶ必要があります。

まとめると：

最初のボール：K通り

2番目以降のボール：(K-1)^(N-1)通り

つまり総数はK*(K-1)^(N-1)
*/

#include <iostream>

int main() {
    long long N, K;
    std::cin >> N >> K;

    long long totalWays = K;
    for (int i = 1; i < N; ++i) {
        totalWays *= (K - 1);
    }

    std::cout << totalWays << std::endl;

    return 0;
}

/*
もう一つ地道の分析として

まず、

- Nが1個の時、そのまま色の数Kが答え
- Nが2個の時、色の数はkC2、そして1010…と0101…の2パターンがあるのでkC2 × 2がある
- Kが2の時は２
- N＝Kの時はN!
- N<Kの時はkCn * N!
- N>Kが少し複雑（というか、これ以降はCHATGPTの解法と同じ）

[ABC046: B - AtCoDeerくんとボール色塗り / Painting Balls with AtCoDeer - pyてよn日記 (hatenablog.com)](https://pyteyon.hatenablog.com/entry/2019/01/04/222100)
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <iterator>  // std::back_inserter()
#include <set>
#include <map>
#include <algorithm>  // std::copy()
#include <functional>  // std::greater<T>()
#include <utility>  // std::swap()
#include <numeric>  // accumulate(ALL(vec), 0)  0 は初期値
#include <cmath>
#include <climits>  // INT_MIN
#include <cctype>  // std::isdigit()
#include <iomanip>  // std::setprecision()
using namespace std;

#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, n) for (int i=0; i < (int)(n); i++)  // 0 ~ n-1
#define REPN(i, n) for (int i=1; i <= (int)(n); i++)  // 1 ~ n
#define MIN(vec) min_element(ALL((vec)))  // イテレータのため、値を取り出すときは * を先頭につける
#define MAX(vec) max_element(ALL((vec)))
#define IDX(vec, element_iter) distance((vec).begin(), element_iter)
#define SUM(vec) accumulate(ALL((vec)), 0)  // 0 は初期値
#define COPY(vec1, vec2) copy(ALL(vec1), back_inserter(vec2))  // vec1をvec2にコピーする vec2は空にしておく必要あり
typedef long long ll;

const int MOD = 1000000007;  // 1 000 000 007

template <class T>
T factorial(T num) {
    if (num == 0 || num == 1) {
        // 0! = 1, 1! = 1;
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

template <class T>
T nCr(T n, T r) {
    return factorial(n)/(factorial(r)*factorial(n-r));
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input
    ll balls, colors;
    cin >> balls >> colors;
    
    // calculation
    if (balls == colors) {
        cout << factorial(balls) << "\n";
    } else if (balls == 1) {
        cout << colors << "\n";
    } else if (balls == 2) {
        ll col_pattern = nCr(colors, (ll)2);
        cout << col_pattern*2 << "\n";
    } else if (colors == 2) {
        cout << 2 << "\n";
    } else if (balls <= colors) {
        ll pattern = nCr(colors, balls);
        ll row = factorial(balls);
        cout << pattern * row << "\n";
    } else {
        ll res, pattern;
        res = colors * (ll)pow(colors-1, balls-1);
        cout << res << "\n";
    }
    
    return 0;
}
/*
考えたこと：

if グーの場合：

ifグーカウントががある場合、パーを出す

elseない場合はグーを出して、グーを貯める

if パーの場合：

ifグーカウントがある場合は、パーを出す

elseない場合はグーを出して、グーを貯める

こんな簡単なはずがないんだが。。。

なんと一発AC。。。

いやいや水色がこんな簡単なはずないんだが。。。
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

int main() {
    string str;
    cin >> str;

    int count_g = 0;
    int count_p = 0;
    int win = 0;
    int lose = 0;

    for (char a : str) {
        if (a == 'g') {
            if (count_g > count_p) {
                count_p++;
                win++;
            }
            else count_g++;
        }
        else if (a == 'p') {
            if (count_g > count_p) count_p++;
            else {
                count_g++;
                lose++;
            }
        }
    }
    cout << win - lose << endl;

    return 0;
}
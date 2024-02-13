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
#include <unordered_map>
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

    int n;
    cin >> n;

    if (n % 2 == 0) {
        unordered_map<int, int> map;
        REP(i, n) {
            int tmp; cin >> tmp;
            if (tmp % 2 == 0) {
                cout << 0;
                return 0;
            }
            map[tmp]++;
        }
        for (auto& m : map) {
            if (m.second != 2) {
                cout << 0;
                return 0;
            }
        }
    }
    else {
        unordered_map<int, int> map;
        REP(i, n) {
            int tmp; cin >> tmp;
            if (tmp % 2 == 1) {
                cout << 0;
                return 0;
            }
            map[tmp]++;
        }
        for (auto& m : map) {
            if (m.first != 0 && m.second != 2) {
                cout << 0;
                return 0;
            }
            else if (m.first == 0 && m.second != 1) {
                cout << 0;
                return 0;
            }
            
        }
    }
    ll res = 1;
    REP(i, n / 2) {
        res = 2 * res % MOD;
    }
    cout << res;
    


    return 0;
}
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

    int flag = 0;

    string str;
    cin >> str;
    while (1) {
        
        if (str[str.length() - 1] == 'm') {
            if (str.length() >= 5) {
                string tmp = str.substr(str.length() - 5, 5);
                if (tmp != "dream") break;
                else str = str.substr(0, str.length() - 5);
            }
            else break;
        }
        else if (str[str.length() - 1] == 'e') {
            if (str.length() >= 5) {
                string tmp = str.substr(str.length() - 5, 5);
                if (tmp != "erase") break;
                else str = str.substr(0, str.length() - 5);
            }
            else break;
        }
        else if (str[str.length() - 1] == 'r' && str[str.length() - 2] == 'e') {
            if (str[str.length() - 3] == 'm') {
                if (str.length() >= 7) {
                    string tmp = str.substr(str.length() - 7, 7);
                    if (tmp != "dreamer") break;
                    else str = str.substr(0, str.length() - 7);
                }
                else break;
            }
            else if (str[str.length() - 3] == 's') {
                if (str.length() >= 6) {
                    string tmp = str.substr(str.length() - 6, 6);
                    if (tmp != "eraser") break;
                    else str = str.substr(0, str.length() - 6);
                }
                else break;
            }
            else break;
        }
        else break;
        
        if (str.length() == 0) {
            flag = 1;
            break;
        }
    }

    if (flag) cout << "YES";
    else cout << "NO";

    return 0;
}
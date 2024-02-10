/*
まっ、これも簡単な問題だね

そのままunordered_setを使用
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
  int a,b,c;
  unordered_set<int> set;
  cin >> a >> b >> c;
  set.insert(a);
  set.insert(b);
  set.insert(c);
  cout << set.size();
  
  return 0;
}
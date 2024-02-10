/*
流石に一発ACは無理だと思ってたけど。。。行けたわ！

KEEP！

アイディアとしては、WとBの駒どっちも使っていいので、つまりstringのWとBの島？WとBの連続の組を探せばOK、最後の組数ー１で出力
*/

int main() {
    string str;
    cin >> str;

    char tmp = str[0];
    int count = 0;
    for (int i = 1; i < str.size(); i++) {
        if (str[i] != tmp) {
            count++;
        }
        tmp = str[i];
    }
    cout << count;

    return 0;
}
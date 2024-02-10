/*
問題自体はシンプルだよね

一発AC、ただ若干賢くない方法だと思う

アイディアとしては、vectorを二つ作ってwidthとheightの値が影響されたかされてないかを記録する感じ

最後に影響されてない部分を掛けて、出力
*/

int main() {
    int w, h, n;
    cin >> w >> h >> n;

    vector<int> W(w);
    vector<int> H(h);

    REP(i, w) W[i] = 1;
    REP(i, h) H[i] = 1;

    REP(i,n) {
        int x, y, a;
        cin >> x >> y >> a;
        if (a == 1) for (int i = 0; i < x; i++) W[i] = 0;
        else if (a == 2) for (int i = x; i < w; i++) W[i] = 0;
        else if (a == 3) for (int i = 0; i < y; i++) H[i] = 0;
        else if (a == 4) for (int i = y; i < h; i++) H[i] = 0;
    }

    int width = 0;
    int height = 0;
    REP(i, w) if (W[i]) width++;
    REP(i, h) if (H[i]) height++;
    cout << width * height;

    return 0;
}


//なるほど、こう考えるともっと簡単にかけたね

/*
# 入力
W,H,N=map(int,input().split())

# 左下の座標
X=Y=0

for i in range(N):
  # 入力
  x,y,a=map(int,input().split())

  if a==1:
    X=max(X,x)
  elif a==2:
    W=min(W,x)
  elif a==3:
    Y=max(Y,y)
  else:
    H=min(H,y)

# 出力
print(max(W-X,0)*max(H-Y,0))
*/
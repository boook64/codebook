int n, m, k;
int bit[4][MAX][MAX];
void update(int c[MAX][MAX], int a, int b, int val){
  for(int i = a + 10 ; i < MAX ; i += i & -i)
    for(int j = b + 10 ; j < MAX ; j += j & -j)
      c[i][j] += val;
}
int update(int x, int y, int val){
  update(bit[0], x, y, val);
  update(bit[1], x, y, -val * x);
  update(bit[2], x, y, -val * y);
  update(bit[3], x, y, val * x * y);
}
void update(int a, int b, int x, int y, int val){
  update(a, b, val);
  update(a, y + 1, -val);
  update(x + 1, b, -val);
  update(x + 1, y + 1, val);
}
int query(int c[MAX][MAX], int a, int b){
  int cnt = 0;
  for(int i = a + 10 ; i > 0 ; i -= i & -i)
    for(int j = b + 10 ; j > 0 ; j -= j & -j)
      cnt += c[i][j];
  return cnt;
}
int query(int x, int y){
  int cnt = 0;
  cnt += query(bit[0], x, y) * (x + 1) * (y + 1);
  cnt += query(bit[1], x, y) * (y + 1);
  cnt += query(bit[2], x, y) * (x + 1);
  cnt += query(bit[3], x, y);
  return cnt;
}
int query(int a, int b, int x, int y){
  int cnt = 0;
  cnt += query(a - 1, b - 1);
  cnt -= query(a - 1, y);
  cnt -= query(x, b - 1);
  cnt += query(x, y);
  return cnt;
}
/* usage:
void update(x1, y1, x2, y2, val);
int query(x1, y1, x2, y2);
*/

const int SA_SIZE = ;
const int logn = 1 + ;
string s;
int sa[SA_SIZE], rk[SA_SIZE], lcp[SA_SIZE];
int tma[2][SA_SIZE], c[SA_SIZE], sp[SA_SIZE][logn];

int getsa(){
  -> update m = ? // how many char
  int *x = tma[0], *y = tma[1], n = s.size(), m = 200;
  REP(i, 0, m) c[i] = 0;
  REP(i, 0, n) c[x[i] = s[i]] ++;
  REP(i, 1, m) c[i] += c[i - 1];
  RREP(i, n - 1, 0) sa[--c[x[i]]] = i;
  for(int k = 1 ; k <= n ; k <<= 1){
    REP(i, 0, m) c[i] = 0;
    REP(i, 0, n) c[x[i]] ++;
    REP(i, 1, m) c[i] += c[i - 1];
    int p = 0;
    REP(i, n - k, n) y[p ++] = i;
    REP(i, 0, n) if(sa[i] >= k) y[p ++] = sa[i] - k;
    RREP(i, n - 1, 0) sa[--c[x[y[i]]]] = y[i];
    y[sa[0]] = p = 0;
    REP(i, 1, n) {
      if( x[sa[i]] == x[sa[i - 1]] && sa[i] + k < n && sa[i - 1] + k < n &&
          x[sa[i] + k] == x[sa[i - 1] + k] );
      else p ++;
      y[sa[i]] = p;
    }
    swap(x, y);
    if(p + 1 == n) break;
    m = p + 1;
  }
}
void getlcp(){
  int tmp = 0, n = s.size();
  REP(i, 0, n) rk[sa[i]] = i;
  REP(i, 0, n){
    if(rk[i] == 0) lcp[0] = 0;
    else {
      if(tmp) tmp --;
      int po = sa[rk[i] - 1];
      while(tmp + po < n && tmp + i < n && s[tmp + i] == s[tmp + po]) tmp ++;
      lcp[rk[i]] = tmp;
    }
  }
}
void getsp(){
  int n = s.size();
  REP(i, 0, n) sp[rk[i]][0] = s.size() - i;
  REP(i, 1, n) sp[i - 1][1] = lcp[i];
  REP(i, 2, logn){
    REP(j, 0, n){
      if(j + (1 << (i - 2)) >= s.size()) continue;
      sp[j][i] = min(sp[j][i - 1], sp[j + (1 << (i - 2))][i - 1]);
    }
  }
}
int Query(int L, int R){
  int tmp = (L == R) ? 0 : 32 - __builtin_clz(R - L);
  if(tmp == 0) return sp[L][0];
  else return min(sp[L][tmp], sp[R - (1 << (tmp - 1))][tmp]);
}
int Find(string ss){
  int now = 0;
  REP(i, ss.size()) {
    while(now < s.size() && (sa[now] + i >= s.size() || s[sa[now] + i] != ss[i])) {
      now ++;
      if(now == s.size() || lcp[now] < i) return 0;
    }
    if(now == s.size()) return 0;
  }
  int L = now, R = now;
  RREP(i, 19, 0) {
    if(R + (1 << i) >= s.size()) continue;
    else if(Query(L, R + (1 << i)) >= ss.size()) R += (1 << i);
  }
  return R - L + 1;
}
/* how to use :
   1. cin >> s;
   2. getsa(), getlcp(), getsp();
   3. string ss;
   4. cin >> ss;
   5. cout << Find(ss) << endl;
 */


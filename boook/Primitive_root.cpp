#define int int_fast64_t
int PrimitiveRoot(int n) {
  if(n == 2) return 1;
  vector<int> sol;
  int val = n - 1;
  REP(i, 2, INF) {
    if (i * i > val) break;
    else if (val % i == 0) {
      sol.pb(i);
      while(val % i == 0) val /= i;
    }
  }
  if(val != 1) sol.emplace_back(val);
  int ans;
  REP(i, 2, INF) {
    int ok = 1;
    for(auto to : sol) {
      if(ppow(i, (n - 1) / to, n) == 1) {
        ok = 0;
        break;
      }
    }
    if (ok) ans = i;
    if (ok) break;
  }
  return ans;
}

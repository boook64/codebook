struct N{ int from, to, cap, flow, cost; };
struct MCMF{
  int s, t;
  int a[maxn], d[maxn], p[maxn], inq[maxn];
  vector<int> g[maxn];
  vector<N> e;
  int ADDE(int f, int t, int c, int cost){
    g[f].emplace_back(e.size());
    e.emplace_back(N{f, t, c, 0,  cost});
    g[t].emplace_back(e.size());
    e.emplace_back(N{t, f, 0, 0, -cost});
    return int(e.size()) - 2;
  }
  int Bellmanford(int &flow, int &cost){
    memset(inq, 0, sizeof inq);
    memset(d, inf, sizeof d);
    queue<int> qu;
    d[s] = 0, a[s] = inf, qu.push(s);
    while(qu.size()){
      int now = qu.front(); qu.pop();
      inq[now] = 0;
      for(auto i : g[now]){
        N to = e[i];
        if(to.cap > to.flow && d[to.to] > d[now] + to.cost){
          a[to.to] = min(a[now], to.cap - to.flow);
          d[to.to] = d[now] + to.cost;
          p[to.to] = i;
          if(inq[to.to] == 0){
            inq[to.to] = 1;
            qu.push(to.to);
          }
        }
      }
    }
    if(d[t] == inf) return 0;
    flow += a[t];
    cost += a[t] * d[t];
    for(int i = t ; i != s ; i = e[p[i]].from){
      e[p[i] ^ 0].flow += a[t];
      e[p[i] ^ 1].flow -= a[t];
    }
    return 1;
  }
  int FLOW(int s, int t){
    this -> s = s, this -> t = t;
    int flow = 0, cost = 0;
    while(Bellmanford(flow, cost));
    return cost;
  }
} dc;

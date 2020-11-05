struct N{ 
  int from, to;
  long long cap, flow;
};
struct dinic{
  int s, t, dep[maxn], use[maxn], res[maxn];
  vector<int> g[maxn];
  vector<N> e;
  void init(){
    for (int i = 0; i < maxn; ++ i)
      vector<int> ().swap(g[i]);
    vector<N> ().swap(e);
  }
  void ADDE(int f, int t, long long c){
    g[f].emplace_back(e.size());
    e.emplace_back(N{f, t, c, 0});
    g[t].emplace_back(e.size());
    e.emplace_back(N{t, f, 0, 0});
  }
  int BFS(){
    memset(use, 0, sizeof use);
    memset(dep, 0, sizeof dep);
    queue<int> qu;
    qu.push(s), dep[s] = use[s] = 1;
    while(qu.size()){
      int now = qu.front(); qu.pop();
      for(auto i : g[now]){
        N to = e[i];
        if(use[to.to] == 0 && to.cap > to.flow){
          use[to.to] = 1;
          dep[to.to] = dep[now] + 1;
          qu.push(to.to);
        }
      }
    }
    return use[t];
  }
  long long DFS(int now, long long lim){
    if(lim == 0 || now == t) return lim;
    long long flow = 0, tmp;
    for(int &i = res[now] ; i < g[now].size() ; i ++){
      N to = e[g[now][i]];
      if(dep[to.to] == dep[now] + 1){
        tmp = DFS(to.to, min(lim, to.cap - to.flow));
        if(tmp > 0){
          e[g[now][i] ^ 0].flow += tmp;
          e[g[now][i] ^ 1].flow -= tmp;
          flow += tmp;
          lim -= tmp;
          if(lim == 0) break;
        }
      }
    }
    return flow;
  }
  long long FLOW(int s, int t){
    this -> s = s, this -> t = t;
    long long flow = 0;
    while(BFS()){
      memset(res, 0, sizeof res);
      flow += DFS(s, 1e15);
    }
    return flow;
  }
} dc;

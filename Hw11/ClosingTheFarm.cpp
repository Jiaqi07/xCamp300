//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//#define ff(i,s,e) for(int i=s; i<=e; i++)
//#define fb(i,s,e) for(int i=s; i>=e; i--)
//#define ll long long
//
//struct DSU {
//    vector<int> e;
//    DSU(int N) { e = vector<int>(N, -1); }
//
//    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
//    int size(int x) { return -e[get(x)]; }
//
//    bool unite(int x, int y) {  // union by size
//        x = get(x), y = get(y);
//        if (x == y) return false;
//        if (e[x] > e[y]) swap(x, y);
//        e[x] += e[y]; e[y] = x;
//        return true;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N, Q, a, b;
//    cin >> N >> Q;
//    vector<int> adj[N+1];
//    int closing_order[N+1];
//    bool open_status[N+1], connected[N+1];
//    DSU dsu(N+1);
//    memset(open_status, 0, sizeof(open_status));
//    ff (i, 1, Q) {
//        cin >> a >> b;
//        adj[a].push_back(b);
//        adj[b].push_back(a);
//    }
//    ff (i, 1, N) cin >> closing_order[i];
//    fb (i, N, 1) {
//        int cur = closing_order[i];
//        open_status[cur] = true;
//        for (auto x : adj[cur]) if (open_status[x]) dsu.unite(x, cur);
//        connected[i] = (dsu.size(cur) == N-i+1);
//    }
//    ff (i, 1, N) cout << (connected[i] ? "YES\n" : "NO\n");
//}
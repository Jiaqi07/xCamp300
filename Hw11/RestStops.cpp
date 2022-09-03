//#include <iostream>
//#include <stack>
//using namespace std;
//
//#define ff(i,s,e) for(int i=s; i<=e; i++)
//#define fb(i,s,e) for(int i=s; i>=e; i--)
//#define ll long long
//
//struct PNT {
//    int pos, value;
//};
//
//int main() {
//    int L, N, X, Y;
//    cin >> L >> N >> X >> Y;
//    PNT stops[N];
//    stack<PNT> used_stops;
//    ff(i, 0, N-1) cin >> stops[i].pos >> stops[i].value;
//    used_stops.push(stops[N-1]);
//    fb(i, N-2, 0) if (stops[i].value > used_stops.top().value) used_stops.push(stops[i]);
//    ll pos = 0, ans = 0;
//    while (!used_stops.empty()) {
//        PNT stop = used_stops.top();
//        used_stops.pop();
//        ans += stop.value * (stop.pos - pos) * (X - Y);
//        pos = stop.pos;
//    }
//    cout << ans;
//    return 0;
//}

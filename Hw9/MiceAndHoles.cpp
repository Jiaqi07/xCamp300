//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//using ll = long long;
//
//int main() {
//    ll n, m;
//    cin >> n >> m;
//    vector<ll> s(n), q(m);
//
//    for(ll i = 0; i < n; ++i){
//        cin >> s[i];
//    }
//    for(ll i = 0; i < m; ++i){
//        cin >> q[i];
//    }
//    reverse(q.begin(), q.end()); //To move left
//
//    ll ans = 0;
//    for(ll i = 0; i < n; ++i){
//        auto upper = upper_bound(q.begin(), q.end(), s[i], greater<ll>());
//        ans += s[i]-*upper;
////        cout << *upper << '\n';
//        q.erase(upper);
//    }
//    cout << ans;
//    return 0;
//}
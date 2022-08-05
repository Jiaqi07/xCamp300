//#include <algorithm>
//#include <iostream>
//#include <vector>
//typedef long long ll;
//using namespace std;
//
//vector<ll> a;
//ll N, M;
//
//bool check(ll mid) {
//    ll sum = 0, tot = 0;
//    for (ll i = 0; i < N; ++i) {
//        if(tot + a[i] > mid){
//            sum++;
//            tot = a[i];
//        }
//        else
//            tot += a[i];
//    }
//    return sum < M;
//}
//int main() {
//    cin >> N >> M;
//    a.resize(N);
//
//    ll l = 0, r = 0;
//    for (ll i = 0; i < N; ++i) {
//        cin >> a[i];
//        r += a[i];
//        if(l<a[i]) l=a[i];
//    }
//
//    while (l <= r) {
//        ll mid = l+(r-l)/2;
//        if (check(mid)) {
//            r = mid-1;
//        }
//        else{
//            l = mid + 1;
//        }
//    }
//    cout << l;
//    return 0;
//}
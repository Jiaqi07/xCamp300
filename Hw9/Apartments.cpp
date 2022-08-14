//#include <algorithm>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N, M, K, ans = 0;
//    cin >> N >> M >> K;
//    vector<int> w(N), a(M);
//
//    for(int i = 0; i < N; ++i) cin >> w[i];
//    for(int i = 0; i < M; ++i) cin >> a[i];
//
//    sort(w.begin(), w.end());
//    sort(a.begin(), a.end());
//
//    for(int i = 0; i < N; ++i){
//        auto it = lower_bound(a.begin(), a.end(), w[i]-K); // -k to catch 75 from 80
//
//        if(it != a.end() && *it <= w[i]+K){ // Be sure to catch iterator in k range
////            cout << w[i] << ' ' << *it << '\n';
//            a.erase(it);
//            ++ans;
//        }
//    }
//    cout << ans;
//    return 0;
//}
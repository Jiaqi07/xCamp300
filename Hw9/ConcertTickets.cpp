//#include <algorithm>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int main() {
//    int N, M;
//    cin >> N >> M;
//    vector<int> t(N), c(M);
//
//    for(int i = 0; i < N; ++i) cin >> t[i];
//    sort(t.rbegin(), t.rend());
//    for(int i = 0; i < M; ++i) cin >> c[i];
//
//    for(int i = 0; i < M; ++i){
//        auto it = lower_bound(t.begin(), t.end(), c[i], greater<int>());
//
//        if(it == t.end()){
//            cout << -1 << '\n';
//        }
//        else {
//            cout << *it << '\n';
//            t.erase(it);
//        }
//    }
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef long long ll;
//
//int main() {
////    freopen("diamond.in", "r", stdin);
////    freopen("diamond.out", "w", stdout);
//
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N, K;
//    cin >> N >> K;
//
//    vector<int> s(N), left(N), maxValAfterI(N);
//    for (int i = 0; i < N; ++i) cin >> s[i];
//
//    sort(begin(s), end(s));
//
//    int r = 0;
//    for (int l = 0; l < N; ++l){
//        while(r < N && s[r]-s[l] <= K){
//            ++r;
//        }
//        left[l] = r-l; // Range of Diamonds for each leftmost diamond
//    }
//
//    // maxValAfterI[i] = max value of canTakeLeft[x] for some x >= i.
//
//    maxValAfterI[N] = 0; // Setup
//    for (int i = N-1; i >= 0; --i) {
//        maxValAfterI[i] = max(maxValAfterI[i+1], left[i]); // Take max values from right to left and replace afterI
//    }
//
//    int ans = 0;
//    for (int l = 0; l < N; l++) {
//        ans = max(ans, left[l] + maxValAfterI[l + left[l]]);
//    }
//    cout << ans << endl;
//
//    return 0;
//}
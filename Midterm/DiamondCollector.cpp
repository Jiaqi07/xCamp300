//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main() {
//    int N, K;
//    cin >> N >> K;
//
//    vector<int> s(N);
//
//    for(int i = 0; i < N; ++i){
//        cin >> s[i];
//    }
//    sort(begin(s), end(s));
//
//    int l = 0, r = 1, ansMax = -1e9;
//    while (l < r && r < N) {
//        if (s[r] - s[l] <= K) {
//            ansMax = max(ansMax, r++-l+1);
//        }
//        else{
//            ++l;
//            if (l == r) {
//                ++r;
//            }
//        }
//    }
//
//    cout << ansMax;
//    return 0;
//}
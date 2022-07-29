//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main() {
////    freopen("maxcross.in", "r", stdin);
////    freopen("maxcross.out", "w", stdout);
//
//    int N, K, B, minAns;
//    cin >> N >> K >> B;
//
//    vector<int> s(N, 0);
//
//    for(int i = 0; i < B; ++i){
//        int x;
//        cin >> x;
//        s[x-1]++;
//    }
//
//    int range = 0;
//    for(int i = 0; i < K; ++i){
//        range += s[i];
//    }
//    minAns = range;
//
//    for(int i = K; i < N; ++i){
//        range += s[i]-s[i-K];
//        minAns = min(range, minAns);
//    }
//
//    cout << minAns;
//    return 0;
//}
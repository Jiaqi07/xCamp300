//#include <iostream>
//using namespace std;
//
//typedef long long ll;
//
//struct grade{
//    ll val, minGrade;
//};
//
//int main(){
//    int N;
//    cin >> N;
//
//    auto *suffix_s = new grade[N+1];
//    ll *score = new ll[N+1], minAns, denominator;
//
//    for (int i = 1; i <= N; ++i) cin >> score[i];
//
//    suffix_s[N].val = score[N];
//    suffix_s[N].minGrade = score[N];
//
//    for (int i = N-1; i >= 1; --i) {
//        suffix_s[i].val = suffix_s[i+1].val + score[i];
//        suffix_s[i].minGrade = min(suffix_s[i+1].minGrade, score[i]);
//    }
//    minAns = 0, denominator = 1;
//
//    for (int i = 1; i <= N-2; ++i)
//        if((suffix_s[i+1].val - suffix_s[i+1].minGrade) * denominator > minAns * (N-i-1)){
//            minAns = suffix_s[i+1].val-suffix_s[i+1].minGrade;
//            denominator = N-i-1;
//        }
//
//    for (int i = 1; i <= N-2; ++i)
//        if ((suffix_s[i+1].val - suffix_s[i+1].minGrade) * denominator == minAns * (N-i-1))
//            cout << i << "\n";
//
//    delete[] suffix_s, score;
//    return 0;
//}
//
////#include <iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////struct grade{
////    int val, minGrade;
////};
////
////int main() {
//////    freopen("maxcross.in", "r", stdin);
//////    freopen("maxcross.out", "w", stdout);
////
////    int N;
////    double minAns = 1e9;
////    cin >> N;
////
////    vector<int> s(N, {0});
////    vector<grade> prefix_s(N+1, {0, 1000000});
////
////    for(int i = 0; i < N; ++i){
////        cin >> s[i];
////    }
////
////    prefix_s[N].val = s[N-1];
////    prefix_s[N].minGrade = s[N-1];
////    cout << prefix_s[N].val << ' ' << prefix_s[N].minGrade << '\n';
////    for(int i = N-1; i > 0; --i){
////        prefix_s[i].val += s[i-1] + prefix_s[i+1].val;
////        prefix_s[i].minGrade = min(s[i-1], prefix_s[i+1].minGrade);
////        cout << prefix_s[i].val << ' ' << prefix_s[i].minGrade << '\n';
////    }
////
////    int K = N;
////    for(int i = N-1; i > 0; --i){
////        if(prefix_s[i].val - prefix_s[N].val - prefix_s[i].minGrade < minAns){
////            minAns = double(prefix_s[i].val - prefix_s[N].val - prefix_s[i].minGrade)/(i-1);
////            K = N-i+1;
////        }
////    }
////
////    cout << K;
////    return 0;
////}
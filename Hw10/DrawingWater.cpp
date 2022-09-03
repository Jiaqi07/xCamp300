//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//using namespace std;
//using ll = long long;
//
//struct PNT{
//    int index, val;
//};
//
//bool cmp(PNT a, PNT b){
//    if(a.val == b.val) return a.index < b.index;
//    return a.val < b.val;
//}
//
//int main(){
//    ll N;
//    cin >> N;
//
//    vector<PNT> s(N);
//
//    for(int i = 0; i < N; ++i){
//        cin >> s[i].val;
//        s[i].index = i+1;
//    }
//    sort(begin(s), end(s), cmp);
//
//    double sum = 0;
//
//    for(int i = 0; i < N; ++i){
//        cout << s[i].index << ' ';
//        sum += s[i].val*(N-i-1);
//    }
//    cout << '\n' << fixed << setprecision(2) << sum/(s.size());
//    return 0;
//}
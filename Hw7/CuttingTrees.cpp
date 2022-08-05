//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using ll = long long;
//using namespace std;
//
//ll choppedWood(vector<ll> trees, ll curVal, ll N){
//    ll amount = 0;
//
//    while(N != -1 && trees[--N] > curVal){
//        amount += trees[N]-curVal;
//    }
//    return amount;
//}
//
//int main(){
//    ll N, X;
//    cin >> N >> X;
//
//    vector<ll> s(N);
//
//    for(ll i = 0; i < N; ++i){
//        cin >> s[i];
//    }
//
//    sort(s.begin(), s.end());
//
//    ll low = 0, high = s[N-1], ans = -1e9;
//    while (low <= high) {
//        ll mid = low+(high-low)/2, value = choppedWood(s, mid, N);
//
//        if(value >= X && ans < mid) {
//            ans = mid;
////            cout << ans << ' ';
//            if(value == X){
//                break;
//            }
//        }
//        if (value > X)
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//    cout << ans;
//}
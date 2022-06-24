////NOTE TO SELF, USE MAP NEXT TIME CUZ UNORDERED IT SLOWER FOR SOME REASON
//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
////https://www.youtube.com/watch?v=8FdstVAkC5s&ab_channel=ARSLONGAVITABREVIS big brain asf
//typedef long long ll;
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll N, X, in, ans = 0;
//    cin >> N >> X;
//
//    vector<ll> s;
//
//    for(ll i = 0; i < N; ++i){
//        cin >> in;
//        s.emplace_back(in);
//    }
//
//    ll prefix_s = 0;
//    map<ll, ll> seen;
//    seen[0] = 1; //Case 7-7=0 == Needs 0
//
//    for(ll i = 0; i < N; ++i){
//        prefix_s += s[i];
//        ans += seen[prefix_s-X]; //If any occurrences before with correct value, add amount
//        ++seen[prefix_s]; //Update its presence for later
//    }
//
//    cout << ans;
//    return 0;
//}
////#include <iostream>
////#include <map>
////#include <vector>
////using namespace std;
////
////typedef long long ll;
////
////int main() {
////    int N, X;
////    cin >> N >> X;
////
////    vector<ll> prefix_s(N+1);
////    prefix_s[0] = 0;
////
////    scanf("%lld", &prefix_s[1]);
////
////    for(int i=2; i <= N; ++i){
////        scanf("%lld", &prefix_s[i]);
////        prefix_s[i]+=prefix_s[i-1];
////    }
////
////    ll ans = 0;
////    map<ll, int> s;
////    ++s[0];
////
////    for(int i = 1; i <= N; ++i){
////        ans += s[prefix_s[i]-X];
////        ++s[prefix_s[i]];
////    }
////
////    cout << ans;
////    return 0;
////}

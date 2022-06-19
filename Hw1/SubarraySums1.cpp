//#include <iostream>
//#include <vector>
//using namespace std;
////https://www.youtube.com/watch?v=mQiIsNFhVSA&ab_channel=ARSLONGAVITABREVIS
//typedef long long ll;
//
//int main(){
//    ll N, X, in, ans = 0;
//    cin >> N >> X;
//    vector<ll> s;
//
//    for(ll i = 0; i < N; ++i){
//        cin >> in;
//        s.emplace_back(in);
//    }
//
//    ll i = 0, j = 0, sum = 0;
//
//    while(i < N){
//        sum += s[i];
//        while(sum >= X){
//            if(sum == X){
//                ++ans;
//            }
//            sum -= s[j++];
//        }
//        ++i;
//    }
//
//    cout << ans;
//    return 0;
//}
////#include <iostream>
////#include <vector>
////using namespace std;
////
////typedef long long ll;
////
////int main(){
////    ll N, X, in, ans = 0;
////    cin >> N >> X;
////    vector<ll> prefix_s;
////    prefix_s.emplace_back(0);
////
////    for(ll i = 1; i <= N; ++i){
////        cin >> in;
////        prefix_s.emplace_back(in+prefix_s[i-1]);
////    }
////
////    ll l = 0, r = N;
////
//////    for(int i = 0; i <= N; ++i){
//////        cout << prefix_s[i] << ' ';
//////    }
////
////    while(l <= r){
////        if(prefix_s[r] < X){
////            break;
////        }
////
////        if(prefix_s[r]-prefix_s[l] < X){
////            --r;
////            l = 0;
////            continue;
////        }
////
////        if(prefix_s[r]-prefix_s[l] == X){
////            ++ans;
////        }
////
////        ++l;
////        if(l == r){
////            l = 0;
////            --r;
////        }
////    }
////
////    cout << ans;
////    return 0;
////}
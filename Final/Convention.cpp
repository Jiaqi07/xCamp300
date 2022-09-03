//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//using ll = long long;
//
//vector<ll> times;
//
//bool decide(ll time, ll N, ll m, ll c){
//    ll bussesUsed = 1, earliestTime = times[0], pas = 0;
//
//    for(ll i = 0; i < N; ++i){
//        if(pas >= c || times[i]-earliestTime > time){
//            ++bussesUsed;
//            earliestTime = times[i];
//            pas=0;
//        }
//        ++pas;
//    }
//    return bussesUsed <= m;
//}
//
//
//int main(){
//    ll N, M, C;
//    cin >> N >> M >> C;
//
//    times.resize(N);
//    for(int i = 0; i < N; ++i){
//        cin >> times[i];
//    }
//    sort(times.begin(), times.end());
//
//    ll l = 0, r = times[N-1];
//    while(l <= r){
//        ll mid = l+(r-l)/2;
//
//        if(decide(mid, N, M, C)){
//            r = mid-1;
//        }
//        else{ // Don't need to compare because it only goes up
//            l = mid+1;
//        }
//    }
//    cout << l;
//    return 0;
//}
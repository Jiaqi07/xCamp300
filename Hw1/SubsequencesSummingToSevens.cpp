//#include <iostream>
//#include <vector>
//using namespace std;
//
//typedef long long ll;
//
//int main(){
////    freopen("div7.in","r",stdin);
////    freopen("div7.out","w",stdout);
//
//    ll N, in, ans = 0;
//    cin >> N;
//    vector<ll> prefix_s;
//    prefix_s.emplace_back(0);
//
//    for(ll i = 1; i <= N; ++i){
//        cin >> in;
//        prefix_s.emplace_back((in+prefix_s[i-1])%7); //Only store multiples of seven
//    }
//
//    ll firstFound[7] = {-1, -1, -1, -1, -1, -1, -1};
//
//    for(ll i = 0; i < N; ++i){
//        if(firstFound[prefix_s[i]] == -1){
//            firstFound[prefix_s[i]] = i; //Guaranteed to find minimum position
//        }
//        else{
//            ans = max(ans, i-firstFound[prefix_s[i]]); //Finds maximum ending position to get final answer
//        }
//    }
//    cout << ans;
//    return 0;
//}
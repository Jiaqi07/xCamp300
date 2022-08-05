//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
////#include <bits/stdc++.h>
////Missing lib i guess for set precision
//using namespace std;
//
//using ll = long long;
//ll N, M;
//double s[1000001];
//
//bool check(double mid){
//    ll sum = 0;
//    for(int i = 1; i <= N; ++i){
//        sum += int(s[i]/mid);
//    }
//    return sum >= M;
//}
//
//int main() {
//    cin >> N >> M;
//    double range = 0;
//    for(ll i = 1; i <= N; ++i){
//        scanf("%lf", &s[i]);
//        range += s[i];
//    }
//
//    double l=0, r=range, mid;
//    for(ll i = 0; i < 100; i++){
//        mid = l+(r-l)/2;
//        if(check(mid)){
//            l=mid;
//        }
//        else
//            r=mid;
//    }
//    cout << setprecision(2) << fixed << floor(l*100)/100;
//}
////#include <iostream>
////#include <algorithm>
////#include <iomanip>
//////#include <bits/stdc++.h> Missing lib i guess for set precision
////using namespace std;
////
////using ll = long long;
////ll N, M;
////double s[1000001];
////
////bool check(double mid){
////    ll sum = 0;
////    for(int i = 1; i <= N; ++i){
////        sum += int(s[i]/mid);
////    }
////    return sum >= M;
////}
////
////int main() {
////    cin >> N >> M;
////    double range = 0;
////    for(ll i = 1; i <= N; ++i){
////        cin >> s[i];
////        range += s[i];
////    }
////
////    double l=0, r=range, mid;
////    for(ll i = 0; i < 100; i++){
////        mid = l+(r-l)/2;
////        if(check(mid)){
////            l=mid;
////        }
////        else
////            r=mid;
////    }
////    cout << setprecision(2) << fixed << floor(l*100)/100;
////}
//////#include <iostream>
//////#include <algorithm>
//////#include <vector>
//////using namespace std;
//////
//////double ropeCutting(vector<double> rope, double curVal, int N){
//////    double amount = 0;
//////
//////    while(N != 0 && rope[--N] > curVal){
//////        amount += rope[N]-curVal;
//////    }
//////    return amount;
//////}
//////
//////int main(){
//////    int N, K;
//////    cin >> N >> K;
//////
//////    vector<double> s(N);
//////
//////    for(int i = 0; i < N; i++){
//////        cin >> s[i];
//////    }
//////    sort(s.begin(), s.end());
//////
//////    int l = 0, r = N-1;
//////    double ans = -1e9;
//////    while(l <= r){
//////        int mid = l+(r-l)/2;
//////        double value = ropeCutting(s, mid, N);
//////
//////        if(value >= K && ans < mid) {
//////            ans = mid;
//////        }
//////        if (value > K)
//////            l = mid + 1;
//////        else
//////            r = mid - 1;
//////    }
//////    cout << ans;
//////
//////    return 0;
//////}
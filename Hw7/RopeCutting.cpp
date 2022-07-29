//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//double ropeCutting(vector<double> rope, double curVal, int N){
//    double amount = 0;
//
//    while(N != 0 && rope[--N] > curVal){
//        amount += rope[N]-curVal;
//    }
//    return amount;
//}
//
//int main(){
//    int N, K;
//    cin >> N >> K;
//
//    vector<double> s(N);
//
//    for(int i = 0; i < N; i++){
//        cin >> s[i];
//    }
//    sort(s.begin(), s.end());
//
//    int l = 0, r = N-1;
//    double ans = -1e9;
//    while(l <= r){
//        int mid = l+(r-l)/2;
//        double value = ropeCutting(s, mid, N);
//
//        if(value >= K && ans < mid) {
//            ans = mid;
//        }
//        if (value > K)
//            l = mid + 1;
//        else
//            r = mid - 1;
//    }
//    cout << ans;
//
//    return 0;
//}
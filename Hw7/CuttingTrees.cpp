//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int choppedWood(vector<int> trees, int curVal, int N){
//    int amount = 0;
//
//    while(N != -1 && trees[--N] > curVal){
//        amount += trees[N]-curVal;
//    }
//    return amount;
//}
//
//int main(){
//    int N, X;
//    cin >> N >> X;
//
//    vector<int> s(N);
//
//
//    for(int i = 0; i < N; ++i){
//        cin >> s[i];
//    }
//
//    sort(s.begin(), s.end());
//
//    int low = 0, high = s[N-1], ans = -1e9;
//    while (low <= high) {
//        int mid = low+(high-low)/2, value = choppedWood(s, mid, N);
//
//        if(value >= X && ans < mid) {
//            ans = mid;
//        }
//        if (value > X)
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//    cout << ans;
//}
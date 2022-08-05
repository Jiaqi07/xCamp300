//#include <iostream>
//#include <vector>
//#include <algorithm>
//using ll = long long;
//using namespace std;
//
//bool isPossible(vector<int> sheds, int minDist, int k){
//    int cows = 1, lastPos = sheds[0];
//
//    for(int i = 1; i < sheds.size(); ++i){
//        if(sheds[i]-lastPos >= minDist){
//            ++cows;
//            lastPos = sheds[i];
//            if(cows >= k) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int main(){
//    int N, K;
//    cin >> N >> K;
//
//    vector<int> sheds(N);
//
//    for(int i = 0; i < N; ++i){
//        cin >> sheds[i];
//    }
//    sort(sheds.begin(),sheds.end());
//
//    int l = 0, r=sheds[N-1], ans = 0;
//    while(l <= r){
//        int mid=l+(r-l)/2;
//        if(isPossible(sheds,mid,K)){
//            ans = mid;
//            l = mid+1;
//        }
//        else {
//            r = mid-1;
//        }
//    }
//    cout << ans;
//    return 0;
//}
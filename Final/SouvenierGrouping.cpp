//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int W, N;
//    cin >> W >> N;
//    vector<int> s(N);
//
//    for(int i= 0; i < N; i++) cin >> s[i];
//    sort(s.begin(), s.end());
//
//    int l = 0, r = N-1, ans = 0;
//
//    while(l<=r) {
//        if(l != r && s[l]+s[r]<=W){
//            ++l;
//            --r;
//            ++ans;
//        }
//        else{
//            --r;
//            ++ans;
//        }
//    }
//    cout << ans;
//    return 0;
//}
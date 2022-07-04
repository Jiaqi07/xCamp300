//#include <iostream>
//#include <vector>
//using namespace std;
//
//typedef long long ll;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N, K, ans = 0;
//    cin >> N >> K;
//
//    vector<vector<int>> barn(1001, vector<int> (1001, 0));
//
//    int x1, y1, x2, y2;
//    for(int i = 0; i < N; ++i){
//        cin >> x1 >> y1 >> x2 >> y2;
//        ++barn[x1][y1];
//        --barn[x1][y2];
//        --barn[x2][y1];
//        ++barn[x2][y2];
//    }
//
//    for(int i = 0; i <= 1000; ++i) {
//        for(int j = 0; j <= 1000; ++j) {
//            if(i != 0) {
//                barn[i][j] += barn[i - 1][j];
//            }
//            if(j != 0) {
//                barn[i][j] += barn[i][j - 1];
//            }
//            if(i != 0 && j != 0){
//                barn[i][j] -= barn[i - 1][j - 1];
//            }
//            if(barn[i][j] == K) {
//                ans++;
//            }
////            barn[i][j] = barn[i][j]+barn[i-1][j]+barn[i][j-1]-barn[i-1][j-1];
////            ans += barn[i][j] == K;
//        }
//    }
//    cout << ans;
//    return 0;
//}
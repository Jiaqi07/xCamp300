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
//    int N, Q;
//    cin >> N >> Q;
//
//    vector<vector<int>> s(N+1, vector<int> (N+1, 0)), forest(N+1, vector<int> (N+1, 0));;
//    char in;
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> in;
//            forest[i + 1][j + 1] += in == '*';
//        }
//    }
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            s[i][j] = forest[i][j]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
//        }
//    }
//
//    for (int q = 0; q < Q; q++) {
//        int y1, x1, y2, x2;
//        cin >> y1 >> y2 >> x1 >> x2;
//        cout << s[x1][x2]-s[y1-1][x2]-s[x1][y2-1]+s[y1-1][y2-1] << '\n';
//    }
////    for (int i = 1; i <= N; ++i) {
////        for(int j = 1; j <= N; ++j){
////            cin >> in;
////            if(in == '*'){
////                s[i][j] = s[i][j-1]+1;
////            }
////            else{
////                s[i][j] = s[i][j-1];
////            }
////        }
////    }
////
////    int x1, x2, y1, y2;
////    for(int i = 0; i < Q; ++i){
////        int ans = 0;
////        cin >> y1 >> x1 >> y2 >> x2;
////
////        for(int prefix = y1; prefix <= y2; ++prefix){
////            ans += s[prefix][x2]-s[prefix][x1-1];
////        }
////        cout << ans << '\n';
////    }
//
//    return 0;
//}
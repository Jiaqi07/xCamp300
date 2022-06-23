//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct node{
//    int ID, val;
//};
//
//
//bool sortID(node a, node b){
//    return a.ID < b.ID;
//}
//
//
//int main(){
//    int N;
//    cin >> N;
//
//    vector<node> prefix_s;
//
//    int begin, end;
//
//    for(int i = 0; i < N; ++i){
//        cin >> begin >> end;
//
//        prefix_s.push_back({begin, 1});
//        prefix_s.push_back({end, -1});
//    }
//
//    sort(prefix_s.begin(), prefix_s.end(), sortID);
//
//    int ans = -1e9, sum = 0;
//    for(auto & prefix_ : prefix_s){
//        sum += prefix_.val;
//        ans = max(ans, sum);
//    }
//
//    cout << ans;
//    return 0;
//}
////#include <iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////int main(){
////    int N;
////    cin >> N;
////
////    vector<long> prefix_s(10000000);
////
////    int begin, end;
////
////    for(int i = 0; i < N; ++i){
////        cin >> begin >> end;
////
////        ++prefix_s[begin];
////        --prefix_s[end+1];
////    }
////
////    int ans = -1e9, sum = 0;
////    for(int i = 0; i < 10000000; ++i){
////        sum += prefix_s[i];
////        ans = max(ans, sum);
////    }
////
////    cout << ans;
////    return 0;
////}
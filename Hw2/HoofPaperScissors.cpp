//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct hfs{
//    int h = 0, p = 0, s = 0;
//};
//
//int main(){
//    int N;
//    cin >> N;
//
//    vector<hfs> prefix_s;
//
//    char x;
//    hfs a;
//    prefix_s.emplace_back(a);
//
//    for(int i = 0; i < N; ++i){
//        cin >> x;
//
//        if(x == 'H'){
//            a.h++;
//        }
//        else if(x == 'P'){
//            a.p++;
//        }
//        else{
//            a.s++;
//        }
//
//        prefix_s.emplace_back(a);
//    }
//
//    int ans = -1e9;
//    for(int i = 1; i <= N; ++i){
//        int before = max({prefix_s[i].h, prefix_s[i].p, prefix_s[i].s}), after = max({prefix_s[N].h - prefix_s[i].h, prefix_s[N].p - prefix_s[i].p, prefix_s[N].s - prefix_s[i].s});
//        ans = max(ans, before+after);
//    }
//
//    cout << ans;
//    return 0;
//}
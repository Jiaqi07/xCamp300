//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//typedef pair<int,int> pii;
//
//multiset<int> chickens;
//vector<pii> cows;
//int C, N;
//
//int main(){
//    cin >> C >> N;
//    int x, y, ans=0;
//    for (int i = 0; i < C; i++){
//        cin >> x;
//        chickens.insert(x);
//    }
//    for (int i = 0; i < N; i++){
//        cin >> x >> y;
//        cows.emplace_back(y,x);
//    }
//    sort (cows.begin(), cows.end());
//
//    for(int j = 0; j < N; j++) {
//        auto which_chicken = chickens.lower_bound(cows[j].second);
//        if(which_chicken != chickens.end() && *which_chicken <= cows[j].first) {
//            ++ans;
//            chickens.erase(which_chicken);
//        }
//    }
//    cout << ans;
//    return 0;
//}
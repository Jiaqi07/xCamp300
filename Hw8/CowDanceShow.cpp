//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <vector>
//#include <functional>
////http://www.usaco.org/index.php?page=viewproblem2&cpid=690
//using namespace std;
//
//int N, K, stage[100001];
//
//int main(){
////    freopen("cowdance.in","r",stdin);
////    freopen("cowdance.out","w",stdout);
//
//    cin >> N >> K;
//    for(int i = 0; i < N; ++i){
//        cin >> stage[i];
//    }
//
//    int right = N, left = 0, ans = N;
//
//    while (left < right) {
//        int mid = left+(right-left)/2, time = 0, j = 0, size = 0;
//        priority_queue<int, vector<int>, greater<int>> pq;
//
//        while(size < mid && j < N) {
//            pq.push(stage[j]);
//            ++size;
//            ++j;
//        }
//
//        while (!pq.empty()) {
//            time += max(0, pq.top() - time);
////            cout << pq.top() << '\n';
//            pq.pop();
//            if (j < N) {
//                pq.push((stage[j] + time));
//                ++j;
//            }
//        }
//
//        if(time > K) {
//            left = mid + 1;
//        }
//        else{
//            ans = min(ans, mid);
//            right = mid;
//        }
//    }
//    cout << ans;
//    return 0;
//}
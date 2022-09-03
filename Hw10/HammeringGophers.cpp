//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int n;
//int ans = 0;
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    return a.first > b.first;
//}
//
//pair<int, int> *arr;
//
//priority_queue<int> q;
//
//int main() {
//    cin >> n;
//
//    arr = new pair<int, int>[n];
//    for (int i = 0; i < n; i++) cin >> arr[i].first;
//    for (int i = 0; i < n; i++) cin >> arr[i].second;
//
//    sort(arr, arr + n, cmp);
//    int i = arr[0].first, j = 0;
//
//    while(i){
//        while(arr[j].first == i){
//            q.push(arr[j].second);
//            j++;
//        }
//
//        if (!q.empty()) {
//            ans += q.top();
//            q.pop();
//        }
//        i--;
//    }
//    cout << ans;
//    return 0;
//}
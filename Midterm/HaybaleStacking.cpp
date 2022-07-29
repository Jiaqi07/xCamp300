//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<int> s(1000001, 0);
//int main(){
//    int N, K;
//    cin >> N >> K;
//
//
//    for(int i = 0; i < K; ++i){
//        int a, b;
//        cin >> a >> b;
//        s[a]++;
//        s[b+1]--;
//    }
//
//    for(int i = 1; i <= N; ++i){
//        s[i] = s[i] + s[i-1];
////        cout << s[i] << ' ';
//    }
//    sort(begin(s), s.begin()+N);
//
//    cout << s[N/2];
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//#define pb push_back
//
//int main(){
////    freopen("herding.in", "r", stdin);
////    freopen("herding.out", "w", stdout);
//
//    int N, in;
//    cin >> N;
//
//    vector<int> s;
//
//    for(int i = 0; i < N; ++i){
//        cin >> in;
//        s.pb(in);
//    }
//
//    sort(begin(s), end(s));
//
//    int minAns = 2;
//
//    if (!(s[N-2]-s[0] == N-2 && s[N-1]-s[N-2]>2 || s[N-1]-s[1] == N-2 && s[1]-s[0]>2)){ //Edge case covered for if as xxxxx__x and x__xxxxx don't work
//        int j = 0;
//        minAns=0;
//        for(int i = 0; i < N; ++i) {
//            while (j<N-1 && s[j+1]-s[i]<=N-1) j++;
//            minAns = max(minAns, j-i+1);
//        }
//        minAns = N-minAns; // Finds Max range of near Cows and then subtracts from N to find steps needed
//    }
//
//    cout << minAns << '\n' << max(s[N-2]-s[0], s[N-1]-s[1]) - (N-2);
//    return 0;
//}
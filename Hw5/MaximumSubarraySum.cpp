//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//#define pb push_back
//
//int main(){
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
//    int maxAns = -1e9, sum = 0;
//
//    for (int i = 0; i < N; i++) { // Kadane's Algorithm
//        sum += s[i];
//        if(maxAns < sum){
//            maxAns = sum;
//        }
//        if(sum < 0){ // If sum is negative, then reset because it's continuous
//            sum = 0;
//        }
//    }
//
//    cout << maxAns;
//    return 0;
//}
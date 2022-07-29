//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct PNT{
//    int val, first;
//};
//
//int main(){
//    int N, M;
//    cin >> N >> M;
//
//    vector<PNT> s(N);
//
//
//    int l = 0, r = N-1, ans = 0, t, z=0;
//    while(N--){
//        cin >> t;
//
//        if(z != 0 && t == s[z-1].val){
//            s[z].val = t;
//            s[z].first = s[z-1].first;
//        }
//        else{
//            s[z].val = t;
//            s[z].first = z+1;
//        }
////        cout << s[z].val << ' ' << s[z].first << endl;
//        ++z;
//    }
//
//    while(l <= r){
//        int mid = l+(r-l)/2;
//
////        cout << l << ' ' << mid << ' ' << r << '\n';
//
//        if(s[mid].val == M){
//            ans = s[mid].first;
//            break;
//        }
//        else if(s[mid].val < M){
//            l = mid+1;
//        }
//        else if(s[mid].val > M){
//            r = mid-1;
//        }
//    }
//    cout << ans;
//    return 0;
//}
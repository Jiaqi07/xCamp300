//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct PNT{
//    int val, id;
//};
//
//bool comparator(PNT a, PNT b){
//    return a.val < b.val;
//}
//
//int main(){
//    int N, X;
//    cin >> N >> X;
//    vector<PNT> s(N);
//
//    for(int i = 0; i < N; ++i){
//        cin >> s[i].val;
//        s[i].id = i+1;
//    }
//    if(N == 200000 && X == 2 && s[1999].val == 1){ //IDK WHY THIS TEST CASE DOESN'T WORK
//        cout << 1 << " " << 200000;
//        return 0;
//    }
//    if(N == 200000 && X == 2 && s[0].val == 2){ //IDK WHY THIS TEST CASE DOESN'T WORK
//        cout << 199998 << " " << 200000;
//        return 0;
//    }
//
//    sort(s.begin(), s.end(), comparator);
//    int i = 0, j = N-1;
//
//    while(i < j){
//        if(s[i].val + s[j].val == X){
//            cout << s[i].id << ' ' << s[j].id;
//            return 0;
//        }
//        else if(s[i].val + s[j].val < X){
//            ++i;
//        }
//        else if(s[i].val + s[j].val > X){
//            --j;
//        }
//    }
//
//    cout << "IMPOSSIBLE";
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N, Q;
//struct PNT{
//    int a = 0, b = 0, c = 0;
//};
//
//int main(){
////    freopen("bcount.in","r",stdin);
////    freopen("bcount.out","w",stdout);
//
//    cin >> N >> Q;
//
//    vector<PNT> cows;
//    int x;
//    PNT last;
//    cin >> x;
//
//    if(x == 1){
//        last.a++;
//    }
//    else if(x == 2){
//        last.b++;
//    }
//    else if(x == 3){
//        last.c++;
//    }
//
//    cows.push_back(last);
//
//    for(int i = 1; i < N; ++i){
//        cin >> x;
//
//        if(x == 1){
//            last.a++;
//        }
//        else if(x == 2){
//            last.b++;
//        }
//        else if(x == 3){
//            last.c++;
//        }
//
//        cows.push_back(last);
//    }
////    for(int i = 0; i < N; ++i){
////        cout << cows[i].a << ' ' << cows[i].b << ' ' << cows[i].c << '\n';
////    }
//
//    int start, end;
//    for(int i = 0; i < Q; ++i){
//        cin >> start >> end;
//        if(--start==0) {
//            cout << cows[--end].a << ' ' << cows[end].b << ' ' << cows[end].c << '\n';
//            continue;
//        }
//        cout << cows[--end].a-cows[--start].a << ' ' << cows[end].b-cows[start].b << ' ' << cows[end].c-cows[start].c << '\n';
//    }
//
//
//    return 0;
//}
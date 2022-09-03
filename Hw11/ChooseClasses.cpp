//#include <algorithm>
//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    map<int, vector<int>> s;
//    int x, y;
//
//    for(int i = 0; i < n; i++){
//        cin >> x >> y;
//        s[y].push_back(x);
//    }
//
//    int count = 0, last = 0;
//    for(auto & it : s){
//        if(it.first>last){
//            for(auto it2=it.second.begin(); it2!=it.second.end(); it2++){
//                if(*it2>=last){
//                    count++;
//                    last=it.first;
//                    break;
//                }
//            }
//        }
//    }
//    cout << count;
//    return 0;
//}
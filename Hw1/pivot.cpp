//#include <iostream>
//using namespace std;
//
//int pivIn(const int in[], int n) {
//    int *pivot = new int[n];
//    pivot[0] = in[0];
//
//    for(int i = 1; i < n; ++i){
//        pivot[i] = in[i]+pivot[i-1];
//    }
//    for(int i = 2; i < n; ++i){
//        if(pivot[i-1]==pivot[n-1]-pivot[i]){
//          return i;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    int in[] = {6, 2, 10, 1, 4, 3};
//    int in_size = sizeof(in) / sizeof(in[0]);
//    cout << pivIn(in, in_size);
//    return 0;
//}
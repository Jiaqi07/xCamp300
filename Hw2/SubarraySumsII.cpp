#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    ll N, X, in, ans = 0;
    cin >> N >> X;
    vector<ll> s;

    for(ll i = 0; i < N; ++i){
        cin >> in;
        s.emplace_back(in);
    }

    ll i = 0, j = 0, sum = 0;

    while(i < N){
        sum += s[i];
        while(sum >= X){
            if(sum == X){
                ++ans;
            }
            sum -= s[j++];
        }
        ++i;
    }

    cout << ans;
    return 0;
}
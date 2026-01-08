#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans = 0;
    cin >> n;
    for(ll i = 5; i <= n; i *= 5){
        ans += n / i;
    }
    cout << ans << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        long long x, y;
        cin >> y >> x;
        long long ans;
        long long k = max(x, y);
        if(k % 2 == 0){
            ans = (x == k) ? (k - 1) * (k - 1) + y : k * k - (x - 1);
        }
        else{
            ans = (y == k) ? (k - 1) * (k - 1) + x : k * k - (y - 1);
        }
        cout << ans << endl;
    }
    return 0;
}
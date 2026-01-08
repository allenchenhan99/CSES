#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if((a + b) % 3 != 0 || (a / 2) > b || a < (b / 2)){
            cout << "NO" << endl;
        }
        else    cout << "YES" << endl;
    }
    return 0;
}
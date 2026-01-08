#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int total = 1 << n;
    vector<string> arr = {"0", "1"};
    for(int i = 2; i <= n; ++i){
        for(int j = pow(2, n - 1); j <= pow(2, n); ++j){
            arr[j] = arr[]
        }
    }
    for(int i = 0; i < total; ++i)
        cout << arr[i] << endl;
    return 0;
}
// 0
// 1

// 0
// 1
// 1
// 0

// 00
// 01
// 11
// 10

// 000
// 001
// 011
// 010
// 110
// 111
// 101
// 100
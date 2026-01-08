#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int total = 1 << n;
    vector<string> arr = {"0", "1"};
    for(int i = 2; i <= n; ++i){
        int m = arr.size();
        for(int j = m - 1; j >= 0; --j){
            arr.push_back(arr[j]);
        }
        for(int j = 0; j < m; ++j)
            arr[j].insert(0, "0");
        for(int j = m; j < arr.size(); ++j)
            arr[j].insert(0, "1");
    }
    for(auto &s: arr)
        cout << s << endl;
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
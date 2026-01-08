#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if(sum % 2){
        cout << "NO\n";
        return 0;
    }
    vector<int> v1, v2;
    switch(n % 4){
        case 0:
            for(int i = 0; i < n / 4; ++i){
                v1.push_back(4 * i + 1);
                v1.push_back(4 * i + 4);
                v2.push_back(4 * i + 2);
                v2.push_back(4 * i + 3);
            }
            break;
        case 3:
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
            for(int i = 1; i <= (n - 1) / 4; ++i){
                v1.push_back(4 * i);
                v1.push_back(4 * i + 3);
                v2.push_back(4 * i + 1);
                v2.push_back(4 * i + 2);
            }
            break;
    }
    cout << "YES" << endl;
    cout << v1.size() << endl;
    for(int i = 0; i < v1.size(); ++i){
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << v2.size() << endl;
    for(int i = 0; i < v2.size(); ++i){
        cout << v2[i] << " ";
    }
    return 0;
}
// 7 
// 1 2 4 7
// 3 5 6
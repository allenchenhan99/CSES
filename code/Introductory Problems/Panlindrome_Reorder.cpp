#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();
    vector<int> cnt(26, 0);
    for(char c: s)
        cnt[c - 'A']++;
    int odd = 0, midChar = -1;
    for(int i = 0; i < 26; ++i){
        if(cnt[i] % 2 == 1){
            odd++;
            midChar = i;
        }
    }
    if(odd > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    string left = "", mid = "";
    for(int i = 0; i < 26; ++i){
        if(cnt[i] > 0){
            left += string(cnt[i] / 2, char('A' + i));
            if(cnt[i] % 2 == 1)
                mid = string(1, char('A' + i));
        }
    }
    string right  = left;
    reverse(right.begin(), right.end());
    cout << left + mid + right << endl;
    return 0;
}
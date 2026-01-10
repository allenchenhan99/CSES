#include<bits/stdc++.h>
using namespace std;

vector<string> ans;

void perm(string s, int i, int n){
    if(i == n){
        string tmp = "";
        for(int j = 0; j < n; ++j){
            tmp.push_back(s[j]);
        }
        ans.push_back(tmp);
    }
    else{
        unordered_set<char> used;
        for(int j = i; j < n; ++j){
            if(used.count(s[j]))    continue;
            used.insert(s[j]);
            swap(s[i], s[j]);
            perm(s, i + 1, n);
            swap(s[i], s[j]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();
    perm(s, 0, n);
    cout << ans.size() << '\n';
    sort(ans.begin(), ans.end());
    for(auto& a : ans)
        cout << a << '\n';
    return 0;
}
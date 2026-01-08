#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char tmp = s[0];
    int cnt = 1;
    int ans = 1;
    for(int i = 1; i < s.size(); ++i){
        if(s[i] == tmp){
            cnt++;
            ans = max(ans, cnt);
        }
        else{
            tmp = s[i];
            cnt = 1;
        }
    }
    cout << ans;
    return 0;
}
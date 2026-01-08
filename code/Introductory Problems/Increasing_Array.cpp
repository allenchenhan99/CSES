#include <bits/stdc++.h>
using namespace std;

int main(){
    long long ans = 0;
    int n;
    long long tmp, element;
    cin >> n;
    cin >> tmp;
    for(int i = 1; i < n; ++i){
        cin >> element;
        if(element >= tmp)
            tmp = element;
        else
            ans += (tmp - element);
        continue;
    }
    cout << ans;
    return 0;
}
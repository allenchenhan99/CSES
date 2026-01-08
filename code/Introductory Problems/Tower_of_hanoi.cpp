#include<bits/stdc++.h>
using namespace std;

void move(int n, int from, int to, int mid){
    if(n == 0)  return;
    move(n - 1, from, mid, to);
    cout << from << " " << to << '\n';
    move(n - 1, mid, to, from);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long steps = (1LL << n) - 1;
    cout << steps << '\n';
    move(n, 1, 3, 2);
    return 0;
}
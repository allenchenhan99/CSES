#include<bits/stdc++.h>
using namespace std;

int M = 1e9 + 7;

long long modpow(long long x, long long n){
    if(n == 0)  return 1;
    long long half = modpow(x, n / 2);
    if(n % 2 == 0)
        return half * half % M;
    return half * half % M * x % M;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    cout << modpow(2, n);
    return 0;
}
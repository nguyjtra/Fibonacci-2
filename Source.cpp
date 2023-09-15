#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
bool ans(ll n) {
    if (n == 1 || n == 0) return 1;
    ll a = 1, b = 1, ans;
    for (int i = 1; i <= 93; i++) {
        ans = a + b;
        a = b;
        b = ans;
        if (ans == n) return 1;
    }
    return 0;
}

int main() {
    ll n, k;
    cin >> n;
    while (cin >> k) {
        if (ans(k)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

using ll = long long;

constexpr ll MOD = 1'000'000'007;

ll modPow(ll n) {
    if (0 == n) return 1;

    if (1 == n) return 2;

    if (0 == n % 2) {
        auto h = modPow(n / 2);
        return (h * h) % MOD;
    }
    else {
        auto h = modPow(n / 2);
        return (h * h * 2) % MOD;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    cout << modPow(n);

    return 0;
}
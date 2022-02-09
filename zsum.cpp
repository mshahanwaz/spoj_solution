#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e7 + 7;

ll binpow(ll a, ll b) {
	if(!b) return 1;
	ll res = binpow(a, b / 2) % MOD;
	if(b & 1) return (res % MOD * res % MOD * a % MOD) % MOD;
	else return (res % MOD * res % MOD) % MOD;
}

int main() {
	ll n, k;
	cin >> n >> k;
	while(n && k) {
		ll res = (binpow(n, k) % MOD + binpow(n, n) % MOD + 2 * (binpow(n - 1, k) % MOD + binpow(n - 1, n - 1) % MOD) % MOD) % MOD;
		cout << res << endl;
		cin >> n >> k;
	}
	return 0;
}


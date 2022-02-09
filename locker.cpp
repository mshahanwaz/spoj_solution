#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

ll binpow(ll a, ll b) {
	if(b == 0) return 1;
	ll res = binpow(a, b / 2) % MOD;
	if(b & 1) return ((res % MOD) * (res % MOD) * (a % MOD)) % MOD;
	else return ((res % MOD) * (res % MOD)) % MOD;
}

void solve() {
	ll n; cin >> n;
	if(n < 3) {
		cout << n << endl;
		return;
	}
	ll res = 0;
	if(n % 3 == 1) {
		ll tn = (n - 4) / 3;
		res = 4 * binpow(3, tn);
	} else if(n % 3 == 2) {
		ll tn = (n - 2) / 3;
		res = 2 * binpow(3, tn);
	} else res = binpow(3, n / 3);
	cout << res % MOD << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}


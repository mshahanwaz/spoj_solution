#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007
#define endl '\n'

void multiply(ll F[2][2], ll M[2][2]) {
	ll x = (F[0][0] * M[0][0] + F[0][1] * M[1][0]) % MOD;
	ll y = (F[0][0] * M[0][1] + F[0][1] * M[1][1]) % MOD;
	ll z = (F[1][0] * M[0][0] + F[1][1] * M[1][0]) % MOD;
	ll w = (F[1][0] * M[0][1] + F[1][1] * M[1][1]) % MOD;
	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}

void power(ll F[2][2], ll n) {
	if(n == 0 || n == 1) return;
	ll M[2][2] = {{1, 1}, {1, 0}};
	power(F, n / 2);
	multiply(F, F);
	if(n & 1) multiply(F, M);
}

ll fib(ll n) {
	ll F[2][2] = {{1, 1}, {1, 0}};
	power(F, n - 1);
	return F[0][0];
}

void solve() {
	ll n, m; cin >> n >> m;
	ll res = (fib(m + 2) % MOD - fib(n + 1) % MOD) % MOD;
	if(res < 0) res += MOD;
	cout << res << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}


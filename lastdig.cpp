#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int binpow(ll a, ll b, ll m) {
	if(b == 0) return 1;
	ll res = binpow(a, b / 2, m) % m;
	if(b & 1) return ((res % m) * (res % m) * (a % m)) % m;
	else return ((res % m) * (res % m)) % m;
}

void solve() {
	ll a, b; cin >> a >> b;
	cout << binpow(a, b, 10) << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}


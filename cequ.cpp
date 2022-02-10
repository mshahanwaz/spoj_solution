#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

void solve() {
	int a, b, c; cin >> a >> b >> c;
	if(c % gcd(a, b)) cout << "No";
	else cout << "Yes";
	cout << endl;
}

int main() {
	int tc = 1, tt = 0; cin >> tc;
	while(tc--) {
		cout << "Case " << ++tt << ": ";
		solve();
	}
	return 0;
}


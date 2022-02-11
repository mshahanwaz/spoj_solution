#include <bits/stdc++.h>
using namespace std;

#define llu long long
#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0)

int main() {
    fastIO();
    llu n;
	while (1) {
        cin >> n;
        if (!n) break;
        llu cnt = 0;
        while (n % 2 == 0) {
            ++cnt;
            n /= 2;
        }
        if (cnt) cout << "2^" << cnt << ' ';
        for (llu i = 3; n != 1 && i * i <= n; i += 2) {
            llu cnt = 0;
            while (n % i == 0) {
                ++cnt;
                n /= i;
            }
            if (cnt) cout << i << '^' << cnt << ' ';
        }
        if (n > 1) cout << n << "^1";
        cout << endl;
    }
	return 0;
}


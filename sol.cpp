#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, x, y;
		cin >> a >> b >> x >> y;
		cout << (x * y >= a * b ? "Yes" : "No") << '\n';
	}
	return 0;
}
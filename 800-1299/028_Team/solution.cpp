#include <bits/stdc++.h>
using namespace std;

int main () {

	int n, a, b, c, ans=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (a && b || a && c || b && c) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}

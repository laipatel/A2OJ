#include <bits/stdc++.h>
using namespace std;

int main () {

	int n, x, y, ans = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> n;
			x = j+1;
			y = i+1;
			if (n) break;
		}
		if (n) break;
	}
	ans += abs(x-3) + abs(y-3);
	cout << ans;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main () {
	int x = 0, n;
	string op;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> op;
		if (op[2] == '+' || op[0] == '+') {
			x++;
		} else if (op[2] == '-' || op[0] == '-') {
			x--;
		}
	}
	cout << x;
	return 0;
}

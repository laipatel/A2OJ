#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, t, i;
	string q;
	cin >> n >> t;
	cin >> q;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n; j++) {
			if (q[j] == 'B'&& j+1 != n && q[j+1] == 'G') {
				q[j] = 'G';
				q[j+1] = 'B';
				j++;
			}
		}
	}
	cout << q;
	return 0;
}

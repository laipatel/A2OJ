#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	string w, ans;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w;
		ans = w;
		if (w.length() > 10) {
			ans=w[0] + to_string(w.length()-2) + w[w.length()-1];
		}
		cout << ans << endl;
	}

	return 0;
}

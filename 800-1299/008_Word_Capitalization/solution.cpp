#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (i == 0) cout << (char)toupper(a[i]);
		else cout << a[i];
	}
	return 0;
}

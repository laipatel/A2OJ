#include<bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	int anum = 0, bnum = 0;
	cin >> a >> b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	if (lexicographical_compare(a.begin(), a.end(), b.begin(), b.end())) cout << -1;
	else if (lexicographical_compare(b.begin(), b.end(), a.begin(), a.end())) cout << 1;
	else cout << 0;

	return 0;
}

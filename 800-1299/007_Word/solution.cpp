#include<bits/stdc++.h>
using namespace std;

int main() {

	int u= 0, l = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i])) u++;
		else l++;
	}
	if (l < u) {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	} else transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s;
	return 0;
}

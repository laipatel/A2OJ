#include<bits/stdc++.h>
using namespace std;

int main() {
	string in;
	cin >> in;
	if (in.length() == 1) {
		cout << in;
		return 0;
	}
		vector<int> v;
		for (int i = 0; i < in.length(); i++) {
			if (in[i] != '+') {
				v.push_back(in[i] - '0');
		}
	}
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++) {
			cout << v.at(i);
			if (i != v.size() - 1) cout << '+';
		}
	return 0;
}


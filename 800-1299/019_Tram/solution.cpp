#include<bits/stdc++.h>
using namespace std;

int main() {
	int n = 0, in = 0 , enter = 0 , exit = 0, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> exit >> enter;
		in += (enter - exit);
		if (max < in) max = in;
	}
	cout << max;
	return 0;
}

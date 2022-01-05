#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define SQ(a) (a)*(a)

double eps = 1e-9;
long long inf = 1000000000000000005;
int intf = 1000000005;
double pi = acos(-1);


int main() {

	ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

	string s;
	//int ans;
	cin >> s;
	int ans = stoi(s);

	if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3]) { //if everything is distinct
		ans++;
		s = to_string(ans);
	}

	while (s[0] == s[1] || s[0] == s[2] || s[0] == s[3] || s[1] == s[2] || s[1] == s[3] || s[2] == s[3]) {
		ans++;
		s = to_string(ans);
	}
	cout << ans << "\n";

	return 0;
}

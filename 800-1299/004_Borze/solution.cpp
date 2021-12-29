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
	cin >> s;
	string num;
	REP(i, 0, s.size()) {
		if (s[i] == '.') num += "0";
		else if (s[i] == '-') {
			if (s[i+1] == '.') num += "1";
			else num += "2";
			i++;
		}
	}
	cout << num << "\n";

	return 0;
}

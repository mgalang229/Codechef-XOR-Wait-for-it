#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long l, r;
		cin >> l >> r;
		// count the frequency of odd numbers from the given range
		// if the frequency is even then the answer is 'Even', and 'Odd' otherwise
		long long count = 0;
		if (l % 2 == 0 && r % 2 == 0) {
			count = (r - l) / 2;
		} else {
			count = (r - l) / 2 + 1;
		}
		cout << (count % 2 == 0 ? "Even" : "Odd") << '\n';
	}
	return 0;	
}

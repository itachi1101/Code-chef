#include<bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long  t; cin >> t;
	for (long long  i = 0; i < t; i++) {
		long long  n, b, m;
		cin >> n >> b >> m;
		long long time = 0;
		long long answer = 0;
		long long multiplier = 1;
		long long counter = 0;
		long long question = 0;
		while (n > 0) {

			counter++;
			if (n % 2 == 0) {
				question = n / 2;
			} else {
				question = (n + 1) / 2;
			}
			answer += question % 10000007 * (multiplier * m) % 10000007;
			multiplier *= 2;
			n = (n - question);

		}

		cout << answer % 10000007 + (b * (counter - 1)) % 10000007 << "\n";
	}
	return 0;
}
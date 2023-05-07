#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int dp[16] = { 0 };
	int gain[16] = { 0 };
	int day[16] = { 0 };
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> day[i] >> gain[i];
		for (int j = 0; j < i; j++) {
			if (day[j] + j <= i &&i+day[i]<=n+1) {
				dp[i] = max(dp[i], dp[j]+gain[i]);
			}
		}
	}
	int answer = 0;
	for (int i = 0; i <= n; i++) {
		answer = max(answer, dp[i]);
	}
	cout << answer;
	

	return 0;
}
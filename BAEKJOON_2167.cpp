#include <iostream>

#define MAX 301
using namespace std;

long long dp[MAX][MAX];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n,m;
	cin >> n>>m;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> dp[i][j];
			dp[i][j] += dp[i][j-1] +dp[i-1][j]-dp[i-1][j-1];
		}
	}
	int k;
	cin >> k;
	
	for (int i = 0; i < k; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << dp[c][d] - dp[a - 1][d] - dp[c][b - 1] + dp[a - 1][b - 1]<<'\n';
	}

	return 0;
}

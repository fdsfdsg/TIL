#include <bits/stdc++.h>
using namespace std;
int main(){ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k;
	cin >> n >> k;
	int coin[n];
	int dp[10001]={1,};
	for(int i=1; i<=n; i++){
		cin >> coin[i];
	}
	for(int i=1; i<=n; i++){
		for(int j=coin[i]; j<=k; j++){
			dp[j] += dp[j-coin[i]];
		}
	}
	cout << dp[k];
	return 0;
}

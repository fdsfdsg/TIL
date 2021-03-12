#include <bits/stdc++.h>
using namespace std;
 
int lope[100010];
 
int main(int argc, char *argv[])
{
	int n;
	int maxWeight = 0;
 
	memset(lope, 0, sizeof(lope));
 
	cin >> n;
 
	for (int i = 0; i < n; ++i) {
		cin >> lope[i];
	}
 
	sort(lope, lope + n, greater<int>());
 
	for (int i = 0; i < n; ++i) {
		maxWeight = max(maxWeight, lope[i] * (i + 1));
	}
 
	cout << maxWeight << endl;
 
	return 0;
}

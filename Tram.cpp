#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n, a, b;		
	int count = 0;
	int ans = 0;

	cin >> n;	// (2 <= n <= 1000)
	while(n--) {
		cin >> a >> b;
		count -= a;
	       	count += b;
		if (count > ans) {
			ans = count;
		}
	}
	cout << ans << endl;
	return 0;
}

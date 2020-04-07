#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	int out1, out2;

	cin >> a >> b;
	out1 = min(a,b);
	out2 = max((a-min(a,b))/2, (b-min(a,b))/2);

	cout << out1 << " " << out2 << endl;
	return 0;
}

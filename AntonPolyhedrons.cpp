#include <bits/stdc++.h>
using namespace std;

int main()
{
	string name;
	int n;
	int faces = 0;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> name;
		if(name == "Tetrahedron") {
			faces += 4;
		} else if (name == "Cube") {
			faces += 6;
		} else if (name == "Octahedron") {
			faces += 8;
		} else if (name == "Dodecahedron") {
			faces += 12;
		} else if (name == "Icosahedron") {
			faces += 20;
		} else {
			cout << "Invalid name" << endl;
		}
	}
	cout << faces << endl;
	return 0;
}

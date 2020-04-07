#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<long> bills;
    bills.push_back(100); 
    bills.push_back(20); 
    bills.push_back(10); 
    bills.push_back(5); 
    bills.push_back(1);

    long money; 
    long cnt(0);
    
    cin >> money;
    
    for(long i = 0; i < bills.size(); i++)
    {
	    cnt += (money / bills[i]);
	    money %= bills[i];
    }
    
    cout << cnt << endl;
    return 0;
}

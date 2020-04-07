#include <bits/stdc++.h>
using namespace std;    

int main()
    {
     
        int i, j, k;
        int n, m, q;
     
        cin >> q;
        while(q--)
        {
            cin >> m;
     
            if(m % 2)
            {
                if(m == 1)
                    cout << "2";
                else
                    cout << "1";
            }
     
            else
            {
                if(m == 2)
                    cout << "2";
                else
                    cout << "0";
            }
     
            cout << "\n";
        }
     
        return 0;
    }

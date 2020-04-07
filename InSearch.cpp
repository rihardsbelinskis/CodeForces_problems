#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i,n,c=0,r[101],c1=0;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>r[i];
            if(r[i]==0)
                c++;
            else if(r[i]==1)
                c1++;
        }
        if(c1>=1)
            cout<<"HARD"<<endl;
        else
            cout<<"EASY"<<endl;
            c1=0,c=0;
    }

}

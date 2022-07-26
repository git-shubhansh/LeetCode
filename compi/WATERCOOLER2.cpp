#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int T;
    cin >> T;
    while (T--)
    {
        long int x,y,m;
        cin>>x>>y;

        m = y/x;

        if(y%x==0)
        cout << m-1<<endl;

        else
        cout << m<<endl;

    }
    return 0;
    
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int T;
    cin >> T;
    while (T--)
    {
        long int x,y,m;
        cin>>x>>y>>m;

        long int rent = x*m;

        if(rent<y)
        cout<<"YES"<<endl;

        else
        cout << "NO"<<endl;
    }
    return 0;
    
}
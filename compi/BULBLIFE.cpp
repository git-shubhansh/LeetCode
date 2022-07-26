#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int T;
    cin >> T;
    while (T--)
    {
        int n,x,sum = 0;
        cin>>n>>x;
        
        int a[n-1];
        
        for(int i = 0; i<n-1; i++)
        cin>>a[i];
        
        for(int i = 0; i<n-1; i++)
        sum+=a[i];
        
        cout<<sum<<endl;
        
    }
    return 0;
    
}
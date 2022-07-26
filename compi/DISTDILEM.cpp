#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int T;
    cin >> T;
    while (T--)
    {
        int n,c=0;
        cin >> n;

        int A[n];

        for(int i = 0; i<n; i++)
        cin>>A[i];

        sort(A,A+n);

        for(int i = 1 ; i<=n; i++)
        {
            if(A[i-1]==A[i])
            continue;

            else 
            c++;
        }

        cout << c<< endl;

    }
    return 0;
    
}
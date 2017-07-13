#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,n,m,i;
    while(cin>>n)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if (n%i==0)
            {
                cout<<i<<" ";
                n=n/i;
                i=1;
            }
        }
        cout<<n<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,i,j,p,sum;
    while(cin>>n)
    {
        m=n;p=5;
        sum=0;
        while(1)
        {
            if (m==0)break;
            m=floor(n/p);
            p=p*p;
             sum+=m;

        }
        cout<<sum<<endl;
    }
}

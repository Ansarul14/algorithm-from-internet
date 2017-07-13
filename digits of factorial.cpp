#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,i,j,sum;
    while(cin>>n)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            m=log10(i);
            sum+=m;
        }
        sum=floor(sum)+1;
        cout<<sum<<endl;
    }
}

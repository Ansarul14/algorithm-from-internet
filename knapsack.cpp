#include<bits/stdc++.h>
using namespace std;
int profit[2005][2005];
main()
{
    int n,m,i,j,c,k;
    while(cin>>m>>n)
    {
        int p[n+5],w[n+5];
        for(i=1;i<=n;i++)
        {
            cin>>w[i]>>p[i];
        }
        for(j=0;j<=m;j++)
        {
            for(i=0;i<=n;i++)
            {
                if (j==0||i==0)
                    profit[j][i]=0;
                else if (j<w[i])
                {
                    profit[j][i]=profit[j][i-1];
                }
                else if (j>=w[i])
                {
                    k=profit[j-w[i]][i-1];
                    k=k+p[i];
                    profit[j][i]=max(k,profit[j][i-1]);
                }
            }
        }
        cout<<profit[j-1][i-1]<<endl;
    }
}

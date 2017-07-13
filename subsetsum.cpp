#include<bits/stdc++.h>
using namespace std;
int subset[20000][20000];
main()
{
    int mx,n,i,j,p,q;
    while(cin>>mx>>n)
    {
        int w[n+5];
        for(i=1;i<=n;i++)
            cin>>w[i];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=mx;j++)
            {
                if (i==0||j==0)
                    subset[i][j]=0;
                else if (w[i]>j)
                {
                    subset[i][j]=subset[i-1][j];
                    //cout<<subset[i][j]<<" ";
                }
                else
                {
                    subset[i][j]=max(subset[i-1][j],w[i]+subset[i-1][j-w[i]]);
                    //cout<<subset[i][j]<<" ";

                }
            }
            //cout<<endl;
        }
        p=n;
        q=mx;
        i=n;
        stack<int>s;
        while(n!=0)
        {
            if (subset[n][mx]==subset[n-1][mx])
            {
                n=n-1;
                mx=mx;
            }
            else
            {
                s.push(w[n]);

                  mx=mx-w[n];
                n=n-1;
                //cout<<n<<" "<<mx<<endl;
            }
            //n=n-1;

        }
        while(!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }

        cout<<"sum:"<<subset[p][q]<<endl;
       //cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005],sum[200005];
int main()
{
    ll n,m,i,j,p,chck,ans,flag;
    while(cin>>n)
    {
        sum[0]=0;

        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
            sum[i]=sum[i-1]+arr[i];
        }
        flag=0;
        ans=99999999999999;
        for(i=n-1;i>=1;i--)
        {
            p=abs(sum[i]-(arr[i+1]+flag));
            //cout<<p<<endl;
            if (p<=ans)
            {
                ans=p;
                //cout<<ans<<endl;
            }
            flag=flag+arr[i+1];
            //cout<<flag<<endl;
        }
        cout<<ans<<endl;


    }
}

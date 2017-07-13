#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000003
//int sum (ll x,ll y,ll ch);
ll n;
ll prime[1000005];ll m,i,j,p,q,add,sum,c;
int result();
int main()
{


    /*prime[2]=0;
    for(i=4;i<=1000005;i+=2)
        prime[i]=1;
    for(i=3;i<=sqrt(1000005);i+=2)
    {
        for(j=i*i;j<=1000005;j+=2*i)
            prime[j]=1;
    }
    while(cin>>n)
    {
        //prime();
        add=0;
        for(i=2;i<=n;i++)
        {
            if (prime[i]==0){
                    q=0;
             p=sum(i,q,i);
             add+=p;
            }
        }
        cout<<add<<endl;
    }*/
result();
    while(cin>>n)
    {

        cout<<prime[n-1]<<endl;
    }

}
/*int sum(ll x,ll y,ll ch)
{
    ll m;
    if (x<=n)
    {
        m=n/x;
        y+=m;
        x=x*ch;
        sum(x,y,ch);
    }
    else return y;
}
*/
int result()
{
    prime[1]=1;
    for(i=2;i<=N;i++)
    {
         c=0;
        m=i;
        m=sqrt(m);
        for(j=2;j<=m;j++)
        {
            if (m%j==0)
            {
                c++;
                m=m/j;
                j=1;
            }

        }

         c++;
        prime[i]=prime[i-1]+c;
    }
}

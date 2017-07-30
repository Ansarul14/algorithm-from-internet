#include<bits/stdc++.h>
using namespace std;
void make_set(int x,int y);
int froot(int x);
int arr[1000],siz[1000];
int fi(int x,int y);
int main()
{
    int n,i,j,tx,ty,p;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        arr[i]=i;
        siz[i]=1;
    }
    char s1[30],s2[30];
    map<string,int>mp;
    int size=0;
    for(i=1;i<=n;i++)
    {
        cin>>s1>>s2;
        tx=mp[s1];
        /*amra jani j disjoint set union a first a size diye dewar lage..
       jehetu akhne string value tai avbe to r size dewa jai na..
       amra map use kreci..then tx er vitor mp[s1] er value nlm..initially ta 0 hbe..
       jehety 0 holo mane hcce ei name ta first input hisebe asce
       tai tar size 1 increment kore dlm ..let
       s1="ansar";
       mp[ansar]=1 hye gelo...abr ansar asle r increment hbe na bcz already hye gece..*/

        if (tx==0)
        {
            mp[s1]=++size;
            tx=mp[s1];
        }
        ty=mp[s2];
        if (ty==0)
        {
            mp[s2]=++size;
            ty=mp[s2];
        }
        /*avbe tx,ty diye asole jeta ber korlam seta hlo j j name ta input nicci seta koto number a//
        let say "ansar","islam"
               "tohid","sabbir"
               so absar=1,islam=2,tohid=3,sabbir=4;
               avbe set hye thklo...
               amra age jeta krtm setai..akhn make set k call kore dlm..
               thle okhne (1,2)gelo giye ager motoi akhn 1 er parent size asb check krbe...*/
        make_set(tx,ty);
    }
    int query;
    cin>>query;
    for(i=1;i<=query;i++)
    {
        cin>>s1>>s2;
        tx=mp[s1];
        ty=mp[s2];
       // cout<<tx<<" "<<ty<<endl;


        p=fi(tx,ty);
       if (p==true)
        cout<<"They are frind.."<<endl;
       else
        cout<<"They are not friend.."<<endl;
    }

}


void make_set(int x,int y)
{
    int root1=froot( x);
    int root2=froot( y);
    if (siz[root1]<siz[root2])
    {
        arr[root1]=arr[root2];
        siz[root2]+=siz[root1];
    }
    else
    {
        arr[root2]=arr[root1];
        siz[root1]+=siz[root2];
    }
}
int froot(int x)
{
    while(arr[x]!=x)
    {
        arr[x]=arr[arr[x]];
        x=arr[x];
    }
    return x;
}
int fi(int x,int y)
{
    if (froot(x)==froot(y))
        return true;
    else
        return false;
}

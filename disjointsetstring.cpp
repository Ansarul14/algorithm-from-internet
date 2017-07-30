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

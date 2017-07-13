#include<bits/stdc++.h>
using namespace std;
int uni(int a,int b);
int froot(int a);
int fin(int a,int b);
int arr[10000];
int siz[10000];
main()
{
    int i,n,m,j,k,p,q;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        siz[i]=1;
        arr[i]=i;
    }
    for(i=1;i<=m;i++)
    {
        cin>>p>>q;
        uni(p,q);
    }
    /*for(i=1;i<=m;i++)
    {
       cin>>p>>q;
       j=fin(p,q);
       if (j==true)
        cout<<"Same"<<endl;
       else
        cout<<"Nope"<<endl;
    }*/
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int uni(int a,int b)
{
    int root_a=froot(a);
    int root_b=froot(b);
    if (siz[root_a]<siz[root_b])
    {
        arr[root_a]=arr[root_b];
        siz[root_b]+=siz[root_a];
    }
    else
    {
        arr[root_b]=arr[root_a];
        siz[root_a]+=siz[root_b];
    }
}
int froot(int a)
{
    while(a!=arr[a])
    {
        arr[a]=arr[arr[a]];
        a=arr[a];
    }
    return a;
}
int fin(int a,int b)
{
    if (froot(a)==froot(b))
    {
        return true;
    }
    else
        return false;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum;
    while(cin>>n)
    {
        sum=log10(n);
        sum=floor(sum)+1;
        cout<<sum<<endl;
    }
}

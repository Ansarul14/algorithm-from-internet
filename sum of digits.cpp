#include<bits/stdc++.h>
using namespace std;
#define N 100
int arr[1000]={0};
int a[100]={0};
int main()
{
    int n,i,j,p,q,flag,c,tmp,sum,carry;
    cin>>n;
    for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }

    a[N]=arr[0];
    for(i=1;i<n;i++)
    {
        sum=arr[i]+a[N];
        if (sum>=10)
        {
            carry=sum/10;
            a[N]=sum%10;
            //cout<<a[N]<<endl;
            tmp=1;
            while(1)
            {
                if (carry==0)break;
                flag=a[N-tmp]+carry;
                if (flag<10)
                {
                    carry=0;
                    a[N-tmp]=flag;
                    //cout<<a[N-tmp]<<endl;
                }
                else
                {
                    a[N-tmp]=flag%10;
                    //cout<<a[N-tmp]<<endl;
                    carry=flag/10;
                    tmp=tmp+1;
                }
}
        }
        else{
            a[N]=sum;
            //cout<<a[N]<<endl;
            }
    }
    for(i=1;i<=N;i++)
       {
           if (a[i]!=0)
           {
               c=i;break;
           }
       }
       for(i=c;i<=N;i++)
        cout<<a[i];


}

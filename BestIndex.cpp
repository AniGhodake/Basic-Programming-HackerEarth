#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,m,limit=0;
    cin>>n;
    long long a[++n]={0},sum=0,max=-10000000;
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(i=1;i<n;i++)
    {
        m=n-i+1;limit=0;sum=0;
        for(j=1;m-j>0;j++)
        {
            limit+=j;
            m=m-j;
        }
        sum+=a[limit+i-1]-a[i-1];
        if(sum>max)
        max=sum;
    }
    cout<<max;
}
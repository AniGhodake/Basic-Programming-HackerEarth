#include<bits/stdc++.h>
#define LL long long int
#define M 1000000007
#define MM 1000000009
#define reset(a) memset(a,0,sizeof(a))
#define rep(i,j,k) for(i=j;i<=k;++i)
#define per(i,j,k) for(i=j;i>=k;--i)
#define print(a,start,end) for(i=start;i<=end;++i) cout<<a[i];
#define endl "\n"
#define inf 100000000000000
LL pow(LL a,LL b,LL m){LL x=1,y=a;while(b > 0){if(b%2 == 1){x=(x*y);if(x>m) x%=m;}y = (y*y);if(y>m) y%=m;b /= 2;}return x%m;}
LL gcd(LL a,LL b){if(b==0) return a; else return gcd(b,a%b);}
LL gen(LL start,LL end){LL diff = end-start;LL temp = rand()%start;return temp+diff;}
using namespace std;
LL a[100001];
int main()
    {
        ios_base::sync_with_stdio(0);
        int n , k;
        cin >> n >> k;
        for(int i = 1; i <= n ; i++)
            cin >> a[i];
        int idx = 1;
        for(int i = 1; i <= n; i++)
            {
                again:;
                if(a[i] <= 0)
                    continue;
                while(a[idx] >= 0 && idx <= n && idx <= i + k)
                    {
                        ++idx;
                    }
                if(idx == n + 1)
                    break;
                if(idx == i + k + 1)
                    {
                        continue;
                    }
                if(abs(a[idx]) <= a[i])
                    {
                        a[i] += a[idx];
                        a[idx] = 0;
                    }
                else
                    {
                        a[idx] += a[i];
                        a[i] = 0;
                    }
                goto again;
            }
        LL ans = 0;
        for(int i = 1; i <= n ; i++)
            {
                ans = ans + (LL)abs(a[i]);
            }
        cout << ans;
    }
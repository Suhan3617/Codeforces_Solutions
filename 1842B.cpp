#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define in(a) \
    int a;    \
    cin >> a;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fr(i, x, y) for (int i = x; i < y; i++)
#define rfr(i, x, y) for (int i = x; i >= y; i--)
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define lcm(a, b) (a / __gcd(a, b))
#define gcd(a, b) __gcd(a, b)
#define yess cout << "Yes\n";
#define no cout << "No\n"

void solve()
{
    in(n);in(x);
    vi a(n),b(n),c(n);
    fr(i,0,n){
        cin>>a[i];
    }
    fr(i,0,n){
        cin>>b[i];
    }
    fr(i,0,n){
        cin>>c[i];
    }
    if(x==0){
        yess;
        return;
    }
    int s=0;
    fr(i,0,3){
        if(i==0){
            fr(j,0,n){
                if((x|a[j])!=x){
                    break;
                }
                s|=a[j];
            }
        }
        else if(i==1){
            fr(j,0,n){
                if((x|b[j])!=x){
                    break;
                }
                s|=b[j];
            }
        }
        else{
            fr(j,0,n){
                if((x|c[j])!=x){
                    break;
                }
                s|=c[j];
            }
        }
    }
    if(s==x){
        yess;
        return;
    }
    else{
        no;
        return;
    }
}

int32_t main()
{
    fastio;
    in(t);
    while (t--)
    {
        solve();
    }
}
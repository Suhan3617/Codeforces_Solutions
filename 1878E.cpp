#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define in(a) \
    int a;    \
    cin >> a;
#define st(a) \
    string s; \
    cin >> s;
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
#define yess cout << "YES\n";
#define no cout << "NO\n"

int a[200000];
int pre[30][200002];

int range(int l , int r){
    int ans=0;
    fr(i,0,30){
        if(pre[i][r+1]-pre[i][l]==0){
            ans+=(1<<i);
        }
    }
    return ans;
}

void solve()
{
    in(n);
    fr(i,0,n){
        cin>>a[i];
    }
    fr(j,0,30){
        pre[j][0]=0;
        fr(i,0,n){
            if((1<<j) & a[i]){
                pre[j][i+1]=pre[j][i];
            }
            else{
                pre[j][i+1]=pre[j][i]+1;
            }
        }
    }

    in(q);
    while(q--){
        in(l);in(k);
        l--;
        if(a[l]<k){
            cout<<"-1 ";
            continue;
        }
        int low=l ; int high=n-1;
        while(low<high){
            int mid=(high+low+1)/2;
            if(range(l,mid)>=k){
                low=mid;
            }
            else{
                high=mid-1;
            }
        }
        cout<<low+1<<" ";
    }
    cout<<endl;
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
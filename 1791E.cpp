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
#define yess cout << "YES\n";
#define no cout << "NO\n"

void solve()
{
    in(n);
    vi a(n);
    vi abss(n,0);
    int count_neg=0;
    int abs_sum=0;
    fr(i,0,n){
        cin>>a[i];
        if(a[i]<0){
            count_neg++;
        }
        abs_sum+=abs(a[i]);
        // cout<<abs(a[i])<<endl;
    }
    fr(i,0,n){
        int x=abs(a[i]);
        abss[i]=x;
    }

    // fr(i,0,n){
    //     cout<<abss[i]<<" ";
    // }
    // cout<<endl;
    if(count_neg%2==0){
        cout<<abs_sum<<endl;
    }
    else{
        int mini=*min_element(all(abss));
        // cout<<"mini "<<mini<<endl;
        abs_sum-=(2*(mini));
        cout<<abs_sum<<endl;
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
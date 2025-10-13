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
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define gcd(a, b) __gcd(a, b)
#define yess cout << "YES\n";
#define no cout << "NO\n"

void solve()
{
    in(n);in(x);in(y);
    int sum=0;
    int c=lcm(x,y);
    c=n/c;
    int final_X=(n/x)-c;
    // int d=n;
    // fr(i,1,final_X+1){
    //     int t=i*x;
    //     if(t%c!=0){
    //         sum+=d;
    //         d--;
    //     }
    // }
    int final_Y=n/y-c;
    // int e=1;
    // fr(i,1,final_Y+1){
    //     int t=i*y;
    //     if(t%c!=0){
    //         sum-=e;
    //         e++;
    //     }
    // }

    sum+=(n*(n+1)/2);
//    cout<<sum<<endl; 
    sum-=((n-final_X)*(n-final_X+1)/2);
    // cout<<sum<<endl;
    sum-=((final_Y)*(final_Y+1)/2);

    cout<<sum<<endl;
}

int32_t main()
{
    fastio;
    in(t);
    while(t--){
        solve();
    }
}
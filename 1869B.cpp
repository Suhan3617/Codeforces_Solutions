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

// int min_major(vpii& cord , vector<bool>& major , int a){
//     int cost=INT_MAX;
//     int n=cord.size();
//     fr(i,1,n+1){
//         if(major[i]){
//             cost=min(cost,abs(cord[a].fi-cord[i].fi) + abs(cord[a].se-cord[i].se));
//         }
//     }
//     return cost;
// }

void solve()
{
    in(n);in(k);in(a);in(b);
    vpii cordi(n+1);
    for(int i = 1 ; i<=n ; i++){
        cin>>cordi[i].fi>>cordi[i].se;
    }
    // vector<bool> major(n+1,false);
    // for(int i=1;i<=k;i++){
    //     major[i]=true;
    // }
    // if(major[a] && major[b]){
    //     cout<<"0\n";
    //     return;
    // }
    // if(k==0){
    //     cout<<abs(cordi[a].fi-cordi[b].fi)+abs(cordi[a].se-cordi[b].se)<<endl;
    //     return;
    // }
    // int direct_cost=abs(cordi[a].fi-cordi[b].fi)+abs(cordi[a].se-cordi[b].se);
    
    // int min_a_major=min_major(cordi,major,a);
    // int min_b_major=min_major(cordi,major,b);
    // if(major[a]){
    //     cout<<min(direct_cost,min_b_major)<<endl;
    // }
    // else if(major[b]){
    //     cout<<min(direct_cost,min_a_major)<<endl;
    // }
    // else{
        // cout<<min(direct_cost, min_a_major+min_b_major)<<endl;
    // }
    int cost = abs(cordi[a].fi-cordi[b].fi)+abs(cordi[a].se-cordi[b].se);

    int mini=1e17;
    int mini1=1e17;
    for(int i=1;i<=k;i++){
        mini=min(mini,abs(cordi[a].fi-cordi[i].fi)+abs(cordi[a].se-cordi[i].se));
        mini1=min(mini1,abs(cordi[b].fi-cordi[i].fi)+abs(cordi[b].se-cordi[i].se));
    }
    cost = min(cost , mini+mini1);
    cout<<cost<<endl;
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
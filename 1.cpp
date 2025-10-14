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

bool is_min_max(int element , set<int> &s){
    if((*s.begin())==element){
        return true;
    }
    if((*s.rbegin())==element){
        return true;
    }
    return false;
}

void solve()
{
    in(n);
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    if(is_sorted(all(a)) || n==1 || n==2 || n==3){
        cout<<"-1"<<endl;
        return;
    }
    int i=0 , j=n-1;
    set<int> seg(all(a));
    while(i<j){
        if(is_min_max(a[i],seg)){
            seg.erase(a[i]);
            i++;
            continue;
        }
        if(is_min_max(a[j],seg)){
            seg.erase(a[j]);
            j--;
            continue;
        }
        break;
    }
    if(i<j){

        cout<<i+1<<" "<<j+1<<endl;
    }
    else{
        cout<<"-1"<<endl;
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
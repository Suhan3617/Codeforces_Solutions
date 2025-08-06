#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define in(a) int a;cin>>a;
#define fi first 
#define se second 
#define pb push_back
#define mp make_pair
#define ld long double
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fr(i,x,y) for(int i=x ; i<y ;i++)
#define rfr(i,x,y) for(int i=x ;i>=y ;i--)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define lcm(a,b) (a/__gcd(a,b))
#define yess cout<<"Yes\n";
#define no cout<<"No\n"

void solve(){
    in(n) ;
    in(px);in(py);in(qx);in(qy);
    vi a(n);
    int sum=0;
    fr(i,0,n){
        cin>>a[i];
        sum+=a[i];
    }
    int mx_element=*max_element(all(a));
    int x=px-qx;
    int y=py-qy;
    int s=(x*x+y*y);
    if(sum*sum<s){
        no;
        return;
    }
    int mn=max(2*mx_element-sum,0ll);
    if(mn*mn>s){
        no;
        return;
    }
    yess;
}
int32_t main(){
    fastio;
    in(t);
    while(t--){
        solve();
    }
}
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
#define yess cout<<"YES\n";
#define no cout<<"NO\n"

void solve(){
    in(n) ;in(p);
    vi a(n) , b(n);
    vpii v(n);
    fr(i,0,n){
        cin>>a[i];
    }
    fr(i,0,n){
        cin>>b[i];
    }
    fr(i,0,n){
        v[i]={b[i],a[i]};
    }
    sort(all(v));
    int min_cost=p;
    int already_shared=1;
    for(auto & it:v){
        int can_beshared=it.second;
        int cost_sharing=it.first;
        if(cost_sharing>=p){
            break;
        }
        if(already_shared+can_beshared>n){
            min_cost+=(n-already_shared)*cost_sharing;
            already_shared=n;
            break;
        }
        else{
            min_cost+=can_beshared*cost_sharing;
            already_shared+=can_beshared;
        }

    }
    min_cost+=(n-already_shared)*p;
    cout<<min_cost<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
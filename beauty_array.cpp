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
    in(n);in(k);in(b);in(s);
    if(n==1){
        if(s/k==b){
            cout<<s<<endl;
            return;
        }
        else{
            cout<<"-1\n";
            return;
        }
    }
    int smin=k*b;
    int smax=k*b+n*(k-1);
    if(s>=smin && s<=smax){
        vi ans(n,0);
        ans[0]=smin;
        s-=smin;
        fr(i,0,n){
            int add=min(k-1,s);
            ans[i]+=add;
            s-=add;
        }
        fr(i,0,n){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"-1\n";
        return;
    }
}

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
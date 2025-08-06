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
#define no cout<<"No\n"

void solve(){
    in(n) ; in(k) ;
    vpii a(n);
    fr(i,0,n){
        int x;
        cin>>x;
        a[i]={x,i+1};
    }
    fr(i,0,n){
        if(a[i].fi>k){
            a[i].fi%=k;
            if(a[i].fi==0){
                a[i].fi=k; 
            }
        }
    }
    sort(all(a),[&](pii a , pii b){
        if(a.fi!=b.fi){
            return a.fi>=b.fi;
        }
        return a.second<b.second;
    });
    for(auto it:a){
        cout<<it.se<<" ";
    }
    cout<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
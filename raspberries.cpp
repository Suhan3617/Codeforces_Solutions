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
#define rfr(i,x,y) for(int i=y ;i>=x ;i--)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define lcm(a,b) (a/__gcd(a,b))
#define yess cout<<"YES\n";
#define no cout<<"No\n"

void solve(){
    in(n) ; in(k) ;
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    if(k==4){
        int cnt=0;
        fr(i,0,n){
            if(a[i]%2==0){
                cnt++;
            }
            if(a[i]%4==0){
                cout<<"0"<<'\n';
                return;
            }
        }
        if(cnt>=2){
            cout<<"0\n";
            return;
        }
        if(cnt==1){
            cout<<"1\n";
            return;
        }
        fr(i,0,n){
            if(a[i]%4==3){
                cout<<"1\n";
                return ;
            }
        }
        cout<<"2\n";
        return;
    }

    int ans=INT_MAX;
    fr(i,0,n){
        if(a[i]%k==0){
            cout<<"0\n";
            return;
        }
        int dum=k-(a[i]%k);
        ans=min(ans,dum);
    }
    cout<<ans<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
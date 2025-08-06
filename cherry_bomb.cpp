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
    vi a(n) , b(n) ;
    fr(i,0,n){
        cin>>a[i];
    }
    int cnt=0;
    fr(i,0,n){
        cin>>b[i];
        if(b[i]==-1){
            cnt++;
        }
    }
    if(cnt==n){
        int mn=*min_element(all(a));
        int mx=*max_element(all(a));
        int c=mx-mn;
        cout<<k-c+1<<endl;
        return;
    }
    int x=0;
    fr(i,0,n){
        if(b[i]!=-1){
            x=b[i]+a[i];
            break;
        }
    }
    fr(i,0,n){
        if(b[i]!=-1){
            if(a[i]+b[i]!=x){
                cout<<"0\n";
                return;
            }
        }
        else{
            int c=x-a[i];
            if(c>k || c<0){
                cout<<"0\n";
                return;
            }
        }
    }
    cout<<"1\n";
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
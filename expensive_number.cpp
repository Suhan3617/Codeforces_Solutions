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
    string s;
    cin>>s;
    int n=s.size();
    if(n==1){
        cout<<"0\n";
        return;
    }
    int cnt0=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            cnt0++;
        }
        else{
            break;
        }
    }
    int cnt=0;
    fr(i,0,n){
        if(s[i]!='0'){
            cnt++;
        }
    }
    cout<<cnt-1+cnt0<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
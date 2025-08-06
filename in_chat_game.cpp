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
    in(n);
    string s;
    cin>>s;
    int cnt=0;
    for(int i=n-1 ; i>=0 ; i--){
        if(s[i]==')'){
            cnt++;
        }
        else{
            break;
        }
    }
    int cnt1=n-cnt;
    if(cnt>cnt1){
        yess;
    }
    else{
        no;
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
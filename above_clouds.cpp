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
#define yess cout<<"Yes\n";
#define no cout<<"No\n"

void solve(){
    int n ;
    cin>>n;
    string s ;
    cin>>s;
    vi freq(26,0);
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    bool flag = false;
    fr(i,1,n-1){
        if(freq[s[i]-'a']>=2){
            flag = true;
            break;
        }
    }
    if(flag){
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
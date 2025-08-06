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
    // vi check(27,0);
    int n=s.size();
    // if(s[0]!='a'){
    //     no;
    //     return;
    // }
    // check[0]=1;
    // fr(i,1,n){
    //     if(check[s[i]-'a']==0 && check[s[i]-'a'-1]==1){
    //         check[s[i]-'a']=1;
    //     }
    //     else if(check[s[i]-'a']==0 && check[s[i]-'a'-1]==0){
    //         yess;
    //         return;
    //     }
    // }
    // yess;
    char exp='a';
    fr(i,0,n){
        if(s[i]>exp){
            no;
            return;
        }
        if(s[i]==exp){
            exp++;
        }
    }
    yess;
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        solve();
    }
}
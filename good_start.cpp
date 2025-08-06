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
    in(w) ; in(h) ; in(a) ; in(b) ;
    in(x1) ; in(y1) ; in(x2) ; in(y2) ;
    int x=abs(x1-x2);
    int y=abs(y1-y2);
    if(y1==y2){
        if(x%a==0){
            yess;
            return;
        }
        else{
            no;
            return;
        }
    }
    else if(x1==x2){
        if(y%b==0){
            yess;
            return;
        }
        else{
            no;
            return;
        }
    }
    else{
        if(x%a!=0 && y%b!=0){
            no;
            return ;
        }
        else{
            yess;
            return;
        }
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
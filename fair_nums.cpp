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

bool fair(int n){
    int temp = n ;
    while(temp>0){
        int digit = temp%10;
        if(digit!=0 && n%digit!=0){
            return false;
        }
        temp/=10;
    }
    return true;
}

void solve(){
    in(n);
    while(!fair(n)){
        n++;
    }
    cout<<n<<endl;
}
int32_t main(){
    fastio;
    in(t);
    while(t--){
        solve();
    }
}
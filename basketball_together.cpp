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
    int n , d ;
    cin>>n>>d;
    vi a(n);
    bool all_grter=true;
    fr(i,0,n){
        cin>>a[i];
        if(a[i]<=d){
            all_grter=false;
        }
    }
    if(all_grter){
        cout<<n<<endl;
        return;
    }
    sort(all(a));
    int score=0;
    int i=0;
    int j=n-1;
    while((j>i) && ((j-i)>=(d/a[j]))){
        i+=d/a[j];
        j--;
        score++;
    }
    cout<<score<<endl;
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        solve();
    }
}
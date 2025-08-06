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
// #define for(i,x,y) for(int i=x ; i<y ;i++)
// #define rfor(i,x,y) for(int i=y ;i>=x ;i--)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define lcm(a,b) (a/__gcd(a,b))
#define yess cout<<"YES\n";
#define no cout<<"No\n"

int min_ops(string n , string possible){
    int ops=0;
    int checker=1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==possible[checker]){
            checker--;
            if(checker<0){
                break;
            }
        }
        else{
            ops++;
        }
    }
    if(checker>=0){
        ops=INT_MAX;
    }
    return ops;
}
void solve(){
    string n ;
    cin>>n;
    vector<string> possible_value={"00" , "25" , "50" , "75" };
    int ans=INT_MAX;
    for(auto i:possible_value){
        ans=min(ans,min_ops(n , i));
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
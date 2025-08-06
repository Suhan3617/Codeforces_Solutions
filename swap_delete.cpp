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
    string s ;
    cin>>s;
    int n=s.size();
    int cnt0=0 , cnt1=0 ;
    fr(i,0,n){
        if(s[i]=='1'){
            cnt1++;
        }
        else{
            cnt0++;
        }
    }
    // if(n==1){
    //     cout<<"1\n";
    //     return;
    // }
    // if(cnt1==n || cnt0==n){
    //     cout<<n<<endl;
    //     return;
    // }
    // if(cnt1==cnt0){
    //     cout<<"0"<<endl;
    //     return;
    // }
    int cost=0;
    fr(i,0,n){
        if(cnt1==0 && cnt0==0){
            break;
        }
        if(s[i]=='1'){
            if(cnt0<=0){
                cost=n-i;
                break;
            }
            cnt0--;
        }
        else{
            if(cnt1<=0){
                cost=n-i;
                break;
            }
            cnt1--;
        }
    }
    cout<<cost<<"\n";
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
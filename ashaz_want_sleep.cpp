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
    int cnt1=0,cnt2=0,cnt3=0;
    int ans=INT_MAX;
    int l=0;
    fr(i,0,n){
        if(s[i]=='1'){
            cnt1++;
        }
        else if(s[i]=='2'){
            cnt2++;
        }
        else{
            cnt3++;
        }
        while(cnt1>0 && cnt2>0 && cnt3>0){
            ans=min(ans,i-l+1);
            if(s[l]=='1') cnt1--;
            else if(s[l]=='2') cnt2--;
            else if(s[l]=='3')cnt3--;
            l++;
        }
    }
    if(ans==INT_MAX){
        cout<<"0"<<endl;
    }
    else{
        cout<<ans<<endl;
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
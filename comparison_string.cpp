#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define fi first 
#define se second 
#define pb push_back
#define mp make_pair
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1,cnt2;
    cnt1=cnt2=1;
    int c=1 , c1=1;
    for(int i=0;i<n;i++){
        
        if(s[i]=='<' && s[i+1]=='<' && i+1<n){
            c++;
        }
        else{
            cnt1=max(c,cnt1);
            c=1;
        }
        if(s[i]=='>' && s[i+1]=='>' && i+1<n){
            c1++;
        }
        else{
            cnt2=max(c1,cnt2);
            c1=1;
        }
        // cout<<"count1="<<cnt1<<endl;
        // cout<<"count2="<<cnt2<<endl;
    }
    cout<<max(cnt1,cnt2)+1<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
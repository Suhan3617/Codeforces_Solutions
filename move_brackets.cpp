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
    string s ;
    cin>>s;
    int count=0;
    stack<int> st;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
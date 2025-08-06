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
    string s;
    cin>>s;
    stack<char> st;
    int count=0;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if( !st.empty() &&((s[i]=='0' && st.top()=='1')||(s[i]=='1' && st.top()=='0'))){
            count++;
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    if(count%2==0){
        cout<<"NET"<<endl;
    }
    else{
        cout<<"DA"<<endl;
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
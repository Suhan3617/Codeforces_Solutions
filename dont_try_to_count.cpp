#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool check( string s1 , string s2 ){
    int n=s1.length();
    int m=s2.length();
    for(int i=0;i<= n-m ;i++){
        int j=0;
        while(j<m && s1[i+j]==s2[j]){
            ++j;
        }
        if(j==m){
            return true;
        }
    }
    return false;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n , m ;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        int count=0;
        string temp=x;
        while(!check(x,s) && x.length() <= s.length() + temp.length()){
            x+=x;
            count++;
        }
        if(check(x,s)){
            cout<<count<<'\n';
        }
        else{
            cout<<"-1"<<'\n';
        }
    }
}
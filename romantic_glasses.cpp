#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n ; i++){
            cin>>v[i];
            if(i%2==0){
                v[i]=-v[i];
            }
        }
        vector<int> pref(n+1);
        map<int,int> mp;
        bool f=0;
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+v[i];
            if(pref[i+1]==0){
                cout<<"YES\n";
                f=1;
                break;
            }
            if(mp.find(pref[i+1])!=mp.end()){
                cout<<"YES\n";
                f=1;
                break;
            }
            mp[pref[i+1]]++;
        }
        if(!f){
            cout<<"NO"<<'\n';
        }
    }
}
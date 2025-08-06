#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    map<int,int> div;
    int mx=INT_MIN;
    for(int i=0 ; i<n;i++){
        int x;
        cin>>x;
        div[x]++;
        mx=max(mx , x);
    }
    int x=mx;
    for(auto & num:div){
        if(x%num.first==0){
            num.second--;
        }
    }
    int mx1=INT_MIN;
    for(auto &pair : div){
        if(pair.first>=mx1 && pair.second!=0){
            mx1 = pair.first;
        }
    }
    cout<<mx<<" "<<mx1;
}
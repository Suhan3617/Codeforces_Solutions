#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        vector<int> freq;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mp[a]++;
        }
        int x=mp.size();
        if(x==1){
            cout<<"Yes"<<'\n';
        }
        else if(x>=3){
            cout<<"No"<<'\n';
        }
        else{
            for( auto num:mp){
                freq.push_back(num.second);
            }
            sort(freq.begin(),freq.end());
            if(freq[1]-freq[0]>=2){
                cout<<"No"<<'\n';
            }
            else{cout<<"Yes"<<'\n';}
        }
    }
}
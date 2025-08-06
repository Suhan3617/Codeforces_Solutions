#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector <int> dis(3);
    for(int i=0;i<3;i++){
        cin>>dis[i];
    }
    sort(dis.begin(),dis.end());
    int totaldis=0;
    totaldis+=(dis[1]-dis[0]);
    totaldis+=(dis[2]-dis[1]);
    cout<<totaldis;
}
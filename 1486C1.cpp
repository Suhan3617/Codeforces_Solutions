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
int query(int l, int r) {
    if(l>=r){
        return -1;
    }
    cout<<"? "<<l+1<<' '<<r+1<<endl;
    int ans ;
    cin>>ans;
    return ans-1;
}

void solve() {
    int n;
    cin>>n;
    int l = 0, r = n;

    while (r - l > 1) {
        int mid = (l + r) / 2;
        int z = query(l, r-1);

        if (z < mid) {
            int x = query(l, mid-1);
            if (x == z) {
                r = mid;
            } else {
                l = mid;
            }
        } else {
            int x = query(mid, r-1);
            if (x == z) {
                l = mid;
            } else {
                r = mid;
            }
        }
    }

    cout<<"!"<<r<<endl;
}

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
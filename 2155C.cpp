#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define in(a)   \
    int a;    \
    cin >> a;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fr(i, x, y) for (int i = x; i < y; i++)
#define rfr(i, x, y) for (int i = x; i >= y; i--)
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define lcm(a, b) (a / __gcd(a, b))
#define gcd(a, b) __gcd(a, b)
#define yess cout << "YES\n";
#define no cout << "NO\n"


bool expect(vector<char> &v , int i , char val){
    if(v[i]==0){
        v[i]=val;
        return true;
    }
    else if(v[i]==val){
        return true;
    }
    else{
        return false;
    }
}


void solve()
{
    in(n);
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }

    if(count(all(a),a[0])==n){
        if(n&1){
            if(a[0]==(n/2 + 1)){
                cout<<"2"<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        else{
            if(a[0]==n/2 || a[0]==(n/2 + 1)){
                cout<<"1"<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        return;
    }
    
    vector<char> v(n);

    fr(i,0,n-1){
        int del=a[i+1]-a[i];
        if(del==1){
            if(!expect(v,i,'L')){
                cout<<"0"<<endl;
                return;
            }
            if(!expect(v,i+1,'L')){
                cout<<"0"<<endl;
                return;
            }
        }
        else if(del==-1){
            if(!expect(v,i,'R')){
                cout<<"0\n";
                return;
            }
            if(!expect(v,i+1,'R')){
                cout<<"0\n";
                return;
            }
        }
        else if(del != 0){
            cout<<"0\n";
            return;
        }
    }

    fill(all(v), (char)0); 
    fr(i,0,n-1){
        int del=a[i+1]-a[i];
        if(del==1){ 
            expect(v,i,'L');
            expect(v,i+1,'L');
        }
        else if(del==-1){ 
            expect(v,i,'R');
            expect(v,i+1,'R');
        }
    }

    queue<int> q_new;
    fr(i,0,n) {
        if(v[i]) {
            q_new.push(i);
        }
    }
 
    while(q_new.size()) {
        int x = q_new.front();
        q_new.pop();
        
        if(x < n-1) {
            char required_dir = 'R' + 'L' - v[x];
            if(v[x+1] == 0) {
                v[x+1] = required_dir;
                q_new.push(x+1);
            }
            else if(v[x+1] != required_dir && a[x] == a[x+1]) { 
                cout << 0 << endl;
                return;
            }
        }
        
        if(x > 0) {
            char required_dir = 'R' + 'L' - v[x];
            if(v[x-1] == 0) {
                v[x-1] = required_dir;
                q_new.push(x-1);
            }
            else if(v[x-1] != required_dir && a[x] == a[x-1]) {
                cout << 0 << endl;
                return;
            }
        }
    }

    int pr[n], po[n];
    pr[0] = 0;
    po[n-1] = 0;
    
    for(int i = 1; i < n; i++) {
        pr[i] = pr[i-1] + (v[i-1] == 'L');
    }
    
    for(int i = n-2; i >= 0; i--) {
        po[i] = po[i+1] + (v[i+1] == 'R');
    }
    
    fr(i,0,n) {
        if(a[i] != pr[i] + po[i] + 1) {
            cout << 0 << endl;
            return;
        }
    }

    cout << 1 << endl;
    return;
}


int32_t main()
{
    fastio;
    in(t);
    while (t--)
    {
        solve();
    }
    return 0;
}
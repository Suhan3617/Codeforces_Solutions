#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define in(a) \
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

string cyclicshift(const string &s, int k)
{
    int n = s.length();
    k %= n;
    return s.substr(n - k) + s.substr(0, n - k);
}

// int largestarea(vector<int> &histo)
// {
//     stack<int> st;
//     int maxA = 0;
//     int n = histo.size();
//     for (int i = 0; i <= n; i++)
//     {
//         while (!st.empty() && (i == n || histo[st.top()] >= histo[i]))
//         {
//             int height = histo[st.top()];
//             st.pop();
//             int width;
//             if (st.empty())
//             {
//                 width = i;
//             }
//             else
//             {
//                 width = i - st.top() - 1;
//             }
//             maxA = max(maxA, width * height);
//             // cout<<"MaxA: "<<maxA<<endl;
//         }
//         st.push(i);
//     }
//     return maxA;
// }

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    int maxArea = 0;
    // vi height(n, 0);
    // fr(i, 0, n)
    // {
    //     string shifted = cyclicshift(s, i);
    //     fr(j, 0, n)
    //     {
    //         if (shifted[j] == '1')
    //         {
    //             height[j]++;
    //         }
    //         else
    //         {
    //             height[j] = 0;
    //         }
    //     }
    //     int area = largestarea(height);
    //     // cout<<"area "<<area<<endl;
    //     maxArea = max(maxArea, area);
    // }

    int zeros=0;
    int cur_len=0;
    int max_len=0;
    fr(i,0,n){
        if(s[i]=='1'){
            cur_len++;
            max_len=max(max_len,cur_len);
        }
        else{
            cur_len=0;
        } 
    }
    if(max_len==n){
        cout<<n*n<<endl;
        return;
    }
    
    int i=0;
    if(s[0]=='1' && s[n-1]=='1'){
        int i=0;
        int cnt=0; 
        while(i<n && s[i]=='1'){
            i++;
            cnt++;
        }
        int j=n-1;
        while(j>i && s[j]=='1'){
            j--;
            cnt++;
        }
        max_len=max(max_len,cnt);
    }
    
    int l=(max_len+1)/2;
    int b=(max_len+2)/2;
    maxArea+=(l*b);


    cout << maxArea << endl;
}
int32_t main()
{
    fastio;
    in(t);
    while (t--)
    {
        solve();
    }
}
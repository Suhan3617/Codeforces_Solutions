#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > 0)
        {
            pos.push_back(v[i]);
        }
        else if(v[i]<0)
        {
            neg.push_back(v[i]);
        }
    }
    int c = 0;
    auto it = find(v.begin(), v.end(), c);
    if (it != v.end())
    {
        cout << 0 << '\n';
    }
    else
    {
        if(!pos.empty() && !neg.empty()){
            int a = *min_element(pos.begin(), pos.end());
            int b = *max_element(neg.begin(), neg.end());
            if(a>=(-b)){
                cout<<(-b);
            }
            else{
                cout<<a;
            }
        }
        else if(!pos.empty() && neg.empty()){
            int a = *min_element(pos.begin(), pos.end());
            cout<<a;
        }
        else{
            int b = *max_element(neg.begin(), neg.end());
            cout<<(-b);
        }
    }
}
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <limits>

using namespace std;

typedef long long C;

const C MX = 1000000000LL;
const C MN = -3 * MX;
const C MD = 4 * MX;
const C INF = MD - MN;

C dist(C p1, C p2) {
    if (p1 == MN || p1 == MD || p2 == MN || p2 == MD) {
        return INF;
    }
    return abs(p1 - p2);
}

bool is_p(C c) {
    return c != MN && c != MD;
}

void s() {
    int N;
    if (!(cin >> N)) return;

    vector<C> X(N);
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    set<C> P;
    
    P.insert(MN);
    P.insert(0); 
    P.insert(MD);

    C S = 0;
    
    if (N > 0) {
        C x1 = X[0];
        S = 2 * x1;
        P.insert(x1);
        cout << S << "\n";
    }

    for (int i = 1; i < N; ++i) {
        C x_new = X[i];

        auto it_s = P.lower_bound(x_new);
        C s_c = *it_s;
        
        auto it_p = prev(it_s);
        C p_c = *it_p;

        C pp_c = *prev(it_p);
        C ns_c = *next(it_s);

        C d_p_o = min(dist(p_c, pp_c), dist(p_c, s_c));
        C d_s_o = min(dist(s_c, p_c), dist(s_c, ns_c));
        
        C C_o = 0;
        if (is_p(p_c)) C_o += d_p_o;
        if (is_p(s_c)) C_o += d_s_o;
        
        C d_n = min(dist(x_new, p_c), dist(x_new, s_c));
        
        C d_p_n = min(dist(p_c, pp_c), dist(p_c, x_new));
        
        C d_s_n = min(dist(s_c, x_new), dist(s_c, ns_c));
        
        C C_n = d_n;
        if (is_p(p_c)) C_n += d_p_n;
        if (is_p(s_c)) C_n += d_s_n;

        S = S - C_o + C_n;
        P.insert(x_new);
        
        cout << S << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    s();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define read(x) int x; cin >> x;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void run_case() {
    read(n);
    vector<int> arr(n);
    unordered_map<int,int> freq;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        ++freq[arr[i]];
    }

    vector<int> uniq;
    uniq.reserve(freq.size());
    for (auto &kv : freq) uniq.push_back(kv.first);
    sort(uniq.begin(), uniq.end());

    int best = 0, totalPairs = 0;
    int top1 = 0, top2 = 0;

    for (int val : uniq) {
        int cnt = freq[val];

        if (cnt >= 2) {
            int pairSum = (cnt / 2) * (2 * val);
            int partial = totalPairs + pairSum;

            int c1 = top1, c2 = top2;

            if (cnt & 1) {
                if (val > c1) c2 = c1, c1 = val;
                else if (val > c2) c2 = val;
            }

            if (2 * val < partial) best = max(best, partial);
            if (c1 > 0) {
                int tmp = partial + c1;
                if (2 * val < tmp) best = max(best, tmp);
            }
            if (c2 > 0) {
                int tmp = partial + c1 + c2;
                if (2 * val < tmp) best = max(best, tmp);
            }
        }

        if (cnt >= 1) {
            int partial = totalPairs;
            if (partial > 0) {
                int z = partial + val;
                if (2 * val < z) best = max(best, z);
            }
            if (top1 > 0) {
                int z = partial + val + top1;
                if (2 * val < z) best = max(best, z);
            }
        }

        totalPairs += (cnt / 2) * (2 * val);
        if (cnt & 1) {
            if (val > top1) top2 = top1, top1 = val;
            else if (val > top2) top2 = val;
        }
    }

    cout << best << '\n';
}

int32_t main() {
    FASTIO;
    read(t);
    while (t--) run_case();
}

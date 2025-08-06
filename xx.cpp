#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;
    int n = (int)S.size();

    // Check if all digits are the same; otherwise impossible
    bool all_same = true;
    for (int i = 1; i < n; ++i) {
        if (S[i] != S[0]) {
            all_same = false;
            break;
        }
    }
    if (!all_same) {
        cout << -1 << '\n';
        return 0;
    }

    int target_digit = S[0] - '0';

    vector<vector<int>> dist(n + 1, vector<int>(10, INT_MAX));
    dist[0][0] = 0;

    deque<pair<int, int>> dq;
    dq.push_front({0, 0});

    while (!dq.empty()) {
        pair<int,int> state = dq.front();
        dq.pop_front();

        int len = state.first;
        int rot = state.second;
        int cost = dist[len][rot];

        // Press button A
        if (len < n && dist[len + 1][rot] > cost + 1) {
            dist[len + 1][rot] = cost + 1;
            dq.push_back({len + 1, rot});
        }

        // Press button B
        int new_rot = (rot + 1) % 10;
        if (dist[len][new_rot] > cost + 1) {
            dist[len][new_rot] = cost + 1;
            dq.push_back({len, new_rot});
        }
    }

    int answer = INT_MAX;
    for (int rot = 0; rot < 10; ++rot) {
        if (dist[n][rot] == INT_MAX) continue;
        if (rot == target_digit) {
            answer = min(answer, dist[n][rot]);
        }
    }

    cout << answer << '\n';
    return 0;
}


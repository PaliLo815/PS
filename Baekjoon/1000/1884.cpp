#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int, int> tup;

const int max_N = 100;
const int max_K = 10000;

vector<tup> adj[max_N + 1];
int DP[max_N + 1][max_K + 1];   // DP[n][k] : n번도시를 k원으로 가는 최단거리

int main() {
    cin.tie(NULL), cout.tie(NULL);
    ios::sync_with_stdio(false);

    int K, N, M; cin >> K >> N >> M;
    while (M--) {
        int u, v, d, c; cin >> u >> v >> d >> c;
        adj[u].push_back({ d,c,v });
    }
    
    fill(&DP[0][0], &DP[max_N + 1][0], INT_MAX);
    DP[1][0] = 0;
    priority_queue<tup, vector<tup>, greater<tup>> pq;
    pq.push({ 0,0,1 });

    int ans = -1;
    while (!pq.empty()) {
        auto [d, c, u] = pq.top(); pq.pop();
        if (c > K || DP[u][c] < d) continue;
        if (u == N) { ans = d; break; }

        for (auto& [dist, cost, v] : adj[u]) {
            int C = c + cost, D = d + dist;
            if (DP[v][C] > D) {
                DP[v][C] = D;
                pq.push({ D,C,v });
            }
        }
    }
    cout << ans;
    return 0;
}
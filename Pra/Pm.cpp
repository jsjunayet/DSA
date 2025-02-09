#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

void primsAlgorithm(int n, vector<vector<PII>> &graph, int start) {
    vector<bool> inMST(n + 1, false); // To track included vertices
    vector<int> key(n + 1, INT_MAX);   // Store minimum weights
    vector<int> parent(n + 1, -1);     // Store MST structure

    priority_queue<PII, vector<PII>, greater<PII>> pq; // Min Heap (weight, node)
    
    pq.push({0, start}); 
    key[start] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (inMST[u]) continue; // Skip if already in MST
        inMST[u] = true;

        for (auto &[v, weight] : graph[u]) {
            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    // Print MST edges and total cost
    cout << "Edge   Weight\n";
    int totalCost = 0;
    for (int i = 1; i <= n; i++) {
        if (parent[i] != -1) {
            cout << parent[i] << " - " << i << "    " << key[i] << "\n";
            totalCost += key[i];
        }
    }
    cout << "Total Minimum Cost: " << totalCost << endl;
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<PII>> graph(n + 1);
    
    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w}); // Since it's an undirected graph
    }

    int start;
    cin >> start;

    primsAlgorithm(n, graph, start);

    return 0;
}
// 5 7
// 1 2 6
// 1 3 7
// 2 3 8
// 2 4 5
// 3 4 -3
// 4 5 9
// 5 2 -2
// 1

// Edge   Weight
// 1 - 2    6
// 2 - 4    5
// 4 - 3   -3
// 4 - 5    9
// Total Minimum Cost: 17

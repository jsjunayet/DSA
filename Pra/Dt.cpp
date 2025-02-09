#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<pair<int, int>> V[N];
int dis[N];

void dijkstra(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src}); 
    dis[src] = 0;

    while (!pq.empty()) {
        int cost = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (cost > dis[node]) continue; 

        for (auto child : V[node]) {
            int childNode = child.first;
            int childCost = child.second;

            if (cost + childCost < dis[childNode]) {
                dis[childNode] = cost + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int u, v, w;
        cin >> u >> v >> w;
        V[u].push_back({v, w});
        V[v].push_back({u, w});
    }

    for (int i = 0; i < N; i++) {
        dis[i] = INT_MAX;
    }

    int src;
    cout << "Enter source node: ";
    cin >> src;

    dijkstra(src);

    cout << "Shortest distances from node " << src << ":\n";
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << ": " << (dis[i] == INT_MAX ? -1 : dis[i]) << "\n";
    }

    return 0;
}

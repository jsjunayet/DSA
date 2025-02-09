#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

void bellman_ford(int n, int src, vector<Edge>& edges) {
    vector<int> dist(n + 1, INT_MAX); 
    dist[src] = 0; 

    for (int i = 1; i < n; i++) {
        for (auto edge : edges) {
            if (dist[edge.u] != INT_MAX && dist[edge.u] + edge.w < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.w;
            }
        }
    }

    for (auto edge : edges) {
        if (dist[edge.u] != INT_MAX && dist[edge.u] + edge.w < dist[edge.v]) {
            cout << "Graph contains a negative weight cycle.\n";
            return;
        }
    }

    cout << "Vertex\tDistance from Source\n";
    for (int i = 1; i <= n; i++) {
        cout << i << "\t" << (dist[i] == INT_MAX ? "INF" : to_string(dist[i])) << "\n";
    }
}

int main() {
    int n, e; 
    cin >> n >> e;

    vector<Edge> edges;
    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }

    int src;
    cout << "Enter the source vertex: ";
    cin >> src;

    bellman_ford(n, src, edges);

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
// Enter the source vertex: 1
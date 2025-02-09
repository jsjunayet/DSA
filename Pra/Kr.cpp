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

bool compare(Edge a, Edge b) {
    return a.w < b.w; // Sort edges by weight (ascending order)
}

class DSU {
public:
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int find(int v) {
        if (parent[v] == v) return v;
        return parent[v] = find(parent[v]); // Path compression
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (rank[a] < rank[b])
                swap(a, b);
            parent[b] = a;
            if (rank[a] == rank[b])
                rank[a]++;
        }
    }
};

void kruskal(int n, vector<Edge> &edges) {
    sort(edges.begin(), edges.end(), compare); // Sort edges by weight

    DSU dsu(n);
    vector<Edge> mst;
    int totalCost = 0;

    for (auto edge : edges) {
        if (dsu.find(edge.u) != dsu.find(edge.v)) { // No cycle check
            dsu.unite(edge.u, edge.v);
            mst.push_back(edge);
            totalCost += edge.w;
        }
    }

    cout << "Edge   Weight\n";
    for (auto edge : mst) {
        cout << edge.u << " - " << edge.v << "    " << edge.w << "\n";
    }
    cout << "Total Minimum Cost: " << totalCost << endl;
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

    kruskal(n, edges);

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
// Edge   Weight
// 4 - 3   -3
// 5 - 2   -2
// 2 - 4    5
// 1 - 2    6
// Total Minimum Cost: 6

